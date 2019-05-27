cmake_minimum_required(VERSION 3.5)

set(ENV{TRAVIS_BUILD_NUMBER} 1)

set(INCLUDE_DIR include)

set(SRC_DIR src)

set(SRC_LIST ${SRC_DIR}/main.cpp)

project(matrix VERSION 0.0.$ENV{TRAVIS_BUILD_NUMBER})

add_executable(matrix ${SRC_LIST})

target_include_directories(matrix PRIVATE ${INCLUDE_DIR})

set_target_properties(matrix PROPERTIES
		CXX_STANDARD 14
		CXX_STANDARD_REQUIRED ON
		COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
	)