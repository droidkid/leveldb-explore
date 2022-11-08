cmake_minimum_required(VERSION 3.9)

project(leveldb-explore)

add_subdirectory("./libs/leveldb")

add_executable(HelloLdb hello_ldb.cpp)
target_link_libraries(HelloLdb PRIVATE leveldb)