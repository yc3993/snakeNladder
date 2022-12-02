cmake_minimum_required(VERSION 3.5)

project(snakeNladder VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_SOURCES
        cm.cpp
)

set(FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR "/usr/local/mysql-8.0.29-macos12-arm64")
include_directories(${FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR}/include)
include_directories(${FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR}/include/cppconn)
link_directories(${FULL_PATH_TO_MYSQL_CONNECTOR_CPP_DIR}/lib)
add_executable(cm cm.cpp)
target_link_libraries(cm curl mysqlclient)
target_compile_features(cm PRIVATE cxx_range_for)







