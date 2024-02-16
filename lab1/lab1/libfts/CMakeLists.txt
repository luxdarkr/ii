cmake_minimum_required(VERSION 3.16)

file(GLOB SOURCE
    fts.cpp
)

add_library(fts STATIC ${SOURCE})

enable_testing()

add_executable(fts_test
    fts.test.cpp
)

target_link_libraries(fts_test
    GTest::gtest_main
    fts
)

include(GoogleTest)
gtest_discover_tests(fts_test)
add_test(fts_test fts_test)
