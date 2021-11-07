cmake_minimum_required(VERSION 3.17)

project(FireflyMath VERSION 0.0.1 LANGUAGES CXX)

set(coreFiles
    include/FireflyMath/Common.h
    include/FireflyMath/Vector3D.h
    src/Vector3D.cpp)

add_library(FireflyMath STATIC ${coreFiles})
target_include_directories(FireflyMath PUBLIC "include/FireflyMath")