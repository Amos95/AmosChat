
cmake_minimum_required (VERSION 3.10)
project(Server)

include_directories(
	../common/
	inc/
)
get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
message("1inc dir:${dirs}")

add_subdirectory(src)

aux_source_directory(. DIR_SRCS)
message("1src dir:${DIR_SRCS}")


add_executable(serverMain  ${DIR_SRCS})
target_link_libraries(serverMain server)

