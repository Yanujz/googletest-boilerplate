# Set source directory
set(SRC_DIR ${CMAKE_CURRENT_LIST_DIR})
file(GLOB_RECURSE SOURCES ${SRC_DIR}/*.c ${SRC_DIR}/*.h)

set(MAIN_PROJECT_LIBNAME ${PROJECT_NAME}_lib)
add_library(${MAIN_PROJECT_LIBNAME} STATIC
    ${SOURCES}
)
# Add main executable
add_executable(${PROJECT_NAME} main.c)

target_link_libraries(${PROJECT_NAME} ${MAIN_PROJECT_LIBNAME})