cmake_minimum_required(VERSION 3.13)
project(voitobrum)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(voitobrum
        include/atom.h
        include/atom_type.h
        include/cerebrum.h
        include/picosha2.h
        src/atom.cpp
        src/cerebrum.cpp
        main.cpp src/AtomText.cpp include/AtomText.h)
