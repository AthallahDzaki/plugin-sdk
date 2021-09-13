cmake_minimum_required(VERSION 3.1.5)
project(plugin-sdk)

set (CMAKE_CXX_STANDARD 17)

option(PSDK_BUILD_VC ON)
option(PSDK_BUILD_III ON)
option(PSDK_BUILD_SA ON)

if (PSDK_BUILD_III)
  add_subdirectory (plugin_III)
endif ()
if (PSDK_BUILD_VC)
  add_subdirectory (plugin_vc)
endif ()
if (PSDK_BUILD_SA)
  add_subdirectory (plugin_sa)
endif ()
