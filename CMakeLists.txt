cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        cmake-build-debug/basicClassification.cpp
        cmake-build-debug/basicClassification.h
        advencedClassificationLoop.cpp
        advencedClassificationLoop.h
        advencedClassificatinRecursion.cpp
        advencedClassificatinRecursion.h
        NumClass.h
        MyMathFun.cpp
        MyMathFun.h)
