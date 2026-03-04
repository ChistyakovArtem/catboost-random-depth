# Install script for directory: /home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/library/cpp/containers

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
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/paged_vector/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/stack_array/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/absl_flat_hash/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/2d_array/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/dense_hash/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/flat_hash/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/comptrie/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/compact_vector/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/stack_vector/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/cow_string/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/ring_buffer/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/intrusive_rb_tree/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/disjoint_interval_tree/cmake_install.cmake")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/python-package/build/temp.linux-x86_64-cpython-310/library/cpp/containers/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
