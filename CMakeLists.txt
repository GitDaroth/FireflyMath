cmake_minimum_required(VERSION 3.17)

project(FireflyMath VERSION 0.0.1 LANGUAGES CXX)

set(coreFiles
    include/FireflyMath/Common.hpp)

add_library(FireflyMath STATIC ${coreFiles})
target_include_directories(FireflyMath PUBLIC "include/FireflyMath")
set_target_properties(FireflyMath PROPERTIES LINKER_LANGUAGE CXX)