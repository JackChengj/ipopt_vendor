cmake_minimum_required(VERSION 3.10)
project(ipopt_vendor)

include(ExternalProject)
include(GNUInstallDirs)

# 核心配置：所有组件安装到统一前缀
set(IPOPT_INSTALL_PREFIX ${CMAKE_INSTALL_PREFIX}) # 对齐 colcon 的 install 目录
set(THIRDPARTY_INSTALL_PREFIX ${IPOPT_INSTALL_PREFIX})

# ================== ASL/HSL/MUMPS 配置 ==================
macro(build_coin_thirdparty name path)
  ExternalProject_Add(
    coin${name}
    PREFIX ${CMAKE_BINARY_DIR}/ThirdParty-${name}
    SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Ipopt/ThirdParty-${name}
    CONFIGURE_COMMAND
      <SOURCE_DIR>/configure --prefix=${THIRDPARTY_INSTALL_PREFIX} # 直接安装到最终路径
      --enable-shared --with-pic
    BUILD_COMMAND $(MAKE) -j8
    INSTALL_COMMAND $(MAKE) install
    BUILD_IN_SOURCE TRUE)
endmacro()

build_coin_thirdparty(ASL ASL)
build_coin_thirdparty(HSL HSL)
build_coin_thirdparty(Mumps Mumps)

# ================== Ipopt 主项目配置 ==================
ExternalProject_Add(
  ipopt_project
  DEPENDS coinASL coinHSL coinMumps
  PREFIX ${CMAKE_BINARY_DIR}/ipopt
  SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Ipopt
  CONFIGURE_COMMAND
    <SOURCE_DIR>/configure --prefix=${IPOPT_INSTALL_PREFIX} # 统一安装路径
    --enable-shared --with-pic --with-asl=${THIRDPARTY_INSTALL_PREFIX}
    --with-hsl=${THIRDPARTY_INSTALL_PREFIX}
    --with-mumps=${THIRDPARTY_INSTALL_PREFIX}
  BUILD_COMMAND $(MAKE) -j8
  INSTALL_COMMAND $(MAKE) install)

# ================== 目标导出配置 ==================
add_library(ipopt_vendor INTERFACE)
add_dependencies(ipopt_vendor ipopt_project)

# 头文件路径
target_include_directories(
  ipopt_vendor INTERFACE $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

# 库文件路径
target_link_directories(ipopt_vendor INTERFACE
                        $<INSTALL_INTERFACE:${CMAKE_INSTALL_LIBDIR}>)

# 链接库名称
target_link_libraries(
  ipopt_vendor
  INTERFACE ipopt
            coinasl
            coinhsl
            coinmumps
            CoinUtils
            dl
            pthread)

# ================== 安装规则 ==================
install(
  TARGETS ipopt_vendor
  EXPORT ipopt_vendor-targets
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR})

install(
  EXPORT ipopt_vendor-targets
  FILE ipopt_vendorConfig.cmake
  NAMESPACE ipopt_vendor::
  DESTINATION share/ipopt_vendor/cmake)
