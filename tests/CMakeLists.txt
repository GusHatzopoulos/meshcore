add_executable(meshcore_tests
    unit/test_version.cpp
)

target_link_libraries(meshcore_tests
    PRIVATE
        meshcore_lib
)

add_test(
    NAME meshcore_tests
    COMMAND meshcore_tests
)