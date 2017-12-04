cmake_minimum_required(VERSION 2.8)

message ("Starting cmake")
project(Quiz)

set(SOURCE src/main.c src/Questions.c)
set(HEADER include/project.h)
set(LIB_SOURCE lib/src/Display_WriteScore.c)
add_library(my STATIC ${LIB_SOURCE})

add_executable (main ${SOURCE})

target_link_libraries(main my)
