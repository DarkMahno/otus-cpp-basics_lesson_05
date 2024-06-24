cmake_minimum_required(VERSION 3.19)
project(03_homework)

set(CMAKE_CXX_STANDARD 17)

add_executable( 03_homework
        guess_the_number.cpp
        check_args/check_args.cpp
        check_args/check_args.h
        check_value/check_value.cpp
        check_value/check_value.h
        table_scores/table_score.cpp
        table_scores/table_score.h
        )

target_include_directories( 03_homework PRIVATE
        ${CMAKE_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/src/
        ${CMAKE_SOURCE_DIR}/src/check_args/
        ${CMAKE_SOURCE_DIR}/src/check_value/
        ${CMAKE_SOURCE_DIR}/src/table_scores/
        )