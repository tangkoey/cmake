cmake_minimum_required(VERSION 3.5)
project(HelloApp 
        VERSION 1.0.0
        DESCRIPTION "The hl app"
        LANGUAGES CXX)
add_executable(helloapp main.cpp)
target_compile_features(helloapp PRIVATE cxx_std_20)