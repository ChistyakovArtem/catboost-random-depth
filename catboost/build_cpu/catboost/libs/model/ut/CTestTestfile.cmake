# CMake generated Testfile for 
# Source directory: /home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/libs/model/ut
# Build directory: /home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/model/ut
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(model_ut "/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/build_cpu/catboost/libs/model/ut/model_ut" "--print-before-suite" "--print-before-test" "--fork-tests" "--print-times" "--show-fails")
set_tests_properties(model_ut PROPERTIES  ENVIRONMENT "" LABELS "MEDIUM" PROCESSORS "1" _BACKTRACE_TRIPLES "/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/cmake/common.cmake;295;add_test;/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/libs/model/ut/CMakeLists.linux-x86_64.txt;71;add_yunittest;/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/libs/model/ut/CMakeLists.linux-x86_64.txt;0;;/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/libs/model/ut/CMakeLists.txt;16;include;/home/artem/Articles_and_Projects/gbdt_with_variable_learners/catboost_change/catboost/catboost/libs/model/ut/CMakeLists.txt;0;")
subdirs("lib")
