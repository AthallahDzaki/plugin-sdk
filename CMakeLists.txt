cmake_minimum_required(VERSION 3.13)
project(plugin-sdk)

set (CMAKE_CXX_STANDARD 23)

option(PSDK_BUILD_VC OFF)
option(PSDK_BUILD_III OFF)
option(PSDK_BUILD_SA OFF)

if (PSDK_BUILD_III)
  add_subdirectory (plugin_III)
endif ()
if (PSDK_BUILD_VC)
  add_subdirectory (plugin_vc)
endif ()
if (PSDK_BUILD_SA)
  add_subdirectory (plugin_sa)
endif ()
