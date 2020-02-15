NAME_SERVER = serverMain
NAME_CLIENT = clientMain

TARGETS = $(NAME_SERVER) $(NAME_CLIENT)

SOURCE_COMMON = $(wildcard ./common/*.cpp)
SOURCE_SERVER = $(SOURCE_COMMON) $(wildcard ./server/src/*.cpp)
SOURCE_CLIENT = $(SOURCE_COMMON) $(wildcard ./client/src/*.cpp)

OBJ_SERVER = $(patsubst %.cpp, %.o, $(SOURCE_SERVER))
OBJ_CLIENT = $(patsubst %.cpp, %.o, $(SOURCE_CLIENT))

INCLUDE_COMMON = -I ./common/

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
