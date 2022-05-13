#该目录记为module_src
set(module_src src)

#当前目录下所有的源文件赋给source_src
aux_source_directory(. source_src)

#指定src目录下源文件 #include "Pub.h" & #include "Calculator.h"
include_directories(${CMAKE_SOURCE_DIR}/include) #没有这一行肯定报错找不到Pub.h & Calculator.h

#编译静态库
add_library(${module_src} ${source_src})