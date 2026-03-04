# Install script for directory: /home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/libs

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
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/data/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/cat_feature/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/column_description/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/helpers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/logging/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/model/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/dataset_statistics/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/metrics/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/eval_result/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/features_selection/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/fstr/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/loggers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/overfitting_detector/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/train_lib/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/gpu_config/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/calc_metrics/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/carry_model/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/model_interface/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/monoforest/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/train_interface/cmake_install.cmake")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
