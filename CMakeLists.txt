#指定cmake最低版本号
cmake_minimum_required(VERSION 3.0)

#指定项目名称
project(CmakeProjDemo)

#指定可执行文件的输出路径位bin目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

#指定子目录
add_subdirectory(src)
#-----------------------以上是顶层目录的必需品-----------------


#main.c中#include "Pub.h" & #include "Calculator.h"，需要指定include目录
include_directories(${CMAKE_SOURCE_DIR}/include) #没有这一行肯定报错找不到Pub.h & Calculator.h

#指定源文件编译成CmakeProjDemo
add_executable(main main.cpp)

#编译可执行文件时，main.c需要指定他的动态链接目录
target_link_libraries(main src) #放在add_executable(CmakeProjDemo main.c)之前为啥不行？