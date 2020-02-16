NAME_SERVER = serverMain
NAME_CLIENT = clientMain

TARGETS = $(NAME_SERVER) $(NAME_CLIENT)

SOURCE_SERVER = $(wildcard ./server/*.cpp) $(wildcard ./server/src/*.cpp)
SOURCE_CLIENT = $(wildcard ./client/*.cpp) $(wildcard ./client/src/*.cpp)

OBJ_SERVER = $(patsubst %.cpp, %.o, $(SOURCE_SERVER))
OBJ_CLIENT = $(patsubst %.cpp, %.o, $(SOURCE_CLIENT))

# this is wrong, ./server/inc/ and ./client/inc/ are not common header.
INCLUDE_COMMON = -I./common/ -I./server/inc/ -I./client/inc/
 
CC = g++
CFLAGS=-std=c++11

all: $(TARGETS)
$(NAME_SERVER):$(OBJ_SERVER)
	@mkdir -p output/
	$(CC) $(OBJ_SERVER) -o output/$(NAME_SERVER)

$(NAME_CLIENT):$(OBJ_CLIENT)
	@mkdir -p output/
	$(CC) $(OBJ_CLIENT) -o output/$(NAME_CLIENT)

%.o:%.cpp
	$(CC) $(INCLUDE_COMMON) $(CFLAGS) -c $< -o $@

.PHONY:clean
clean:
	rm -rf $(OBJ_SERVER) $(OBJ_CLIENT) output/
