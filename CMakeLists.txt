cmake_minimum_required(VERSION 3.13)

project(voitobrum)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(voitobrum
        include/Memory.h
        include/memory_type.h
        include/Cerebrum.h
        include/picosha2.h
        src/Memory.cpp
        src/Cerebrum.cpp
        main.cpp src/TextMemory.cpp include/TextMemory.h src/Tag.cpp include/Tag.h include/utilities.h src/utilities.cpp src/textEditorWindow.cpp include/textEditorWindow.h)

target_link_libraries(voitobrum -lSDL2)