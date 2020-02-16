
cmake_minimum_required (VERSION 3.10)
project(Client)

include_directories(
	../common/
	inc/
)
get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
message("inc dir:${dirs}")

add_subdirectory(src)

aux_source_directory(. DIR_SRCS)
message("src dir:${DIR_SRCS}")


add_executable(clientMain  ${DIR_SRCS})
target_link_libraries(clientMain client)

