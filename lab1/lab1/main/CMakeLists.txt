cmake_minimum_required(VERSION 3.16)

file (GLOB SOURCE
    main.cpp
)

include_directories(${PROJECT_SOURCE_DIR}/lab1/external/cxxopts/include)
include_directories(${PROJECT_SOURCE_DIR}/lab1/libfts)

add_executable(lab1 ${SOURCE})

target_link_libraries(lab1 PUBLIC fts)
