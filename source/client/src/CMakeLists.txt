
#include_directories(
#	../../common/
#	../inc/
#	)

get_property(dirs DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY INCLUDE_DIRECTORIES)
message("inc dir:${dirs}")

aux_source_directory(. DIR_SRC)
message("src dir:${DIR_SRC}")


ADD_LIBRARY(client ${DIR_SRC})











