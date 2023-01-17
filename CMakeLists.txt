cmake_minimum_required(VERSION 3.25.0)
project(demo_app)

add_executable(demo_app threads.c)
#add_executable(demo_app threads1.c)
target_link_libraries(demo_app -lzephyr)

