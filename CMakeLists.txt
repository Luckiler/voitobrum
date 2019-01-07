cmake_minimum_required(VERSION 3.13)
project(voitobrum)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(voitobrum
        include/memory.h
        include/memory_type.h
        include/cerebrum.h
        include/picosha2.h
        src/memory.cpp
        src/cerebrum.cpp
        main.cpp src/textMemory.cpp include/textMemory.h)
