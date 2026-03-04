# Install script for directory: /home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/library/cpp

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/sanitizer/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/malloc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/cpuid_check/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/testing/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/colorizer/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/dbg_output/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/diff/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/lcs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/containers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/json/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/getopt/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/cppparser/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/string_utils/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/terminate_handler/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/threading/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/case_insensitive_string/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/digest/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/linear_regression/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/accurate_accumulate/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/deprecated/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/object_factory/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/binsaver/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/logger/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/fast_exp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/grid_creator/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/text_processing/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/cache/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/langs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/tokenizer/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/enumbitset/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/langmask/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/token/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/packers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/on_disk/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/archive/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/hnsw/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/dot_product/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/sse/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/l1_distance/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/l2_distance/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/pair_vector_distance/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/online_hnsw/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/statistics/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/fast_log/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/svnversion/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/par/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/blockcodecs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/chromium_trace/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/yson/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/yt/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/neh/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/coroutine/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/dns/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/http/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/streams/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/cgiparam/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/iterator/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/netliba/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/openssl/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/resource/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/expression/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/jni/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/float16/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/build_info/cmake_install.cmake")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/library/cpp/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
