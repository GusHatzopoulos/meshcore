add_library(meshcore_lib
    MeshCore.cpp
)

target_include_directories(meshcore_lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(meshcore_lib
    PUBLIC
        cxx_std_20
)

add_executable(meshcore
    main.cpp
)

target_link_libraries(meshcore
    PRIVATE
        meshcore_lib
)