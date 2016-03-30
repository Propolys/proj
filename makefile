TARGET = proj.gray
LIBS = -lsfml-graphics -lsfml-window -lsfml-system -pthread
CPP_FILES := $(wildcard src/*.cpp)
OBJ_FILES := $(addprefix obj/,$(notdir $(CPP_FILES:.cpp=.o)))

all: $(OBJ_FILES)
	g++ $^ -o $(TARGET) $(LIBS)

obj/%.o: src/%.cpp
	g++ -c -o $@ $^ -std=gnu++11

clean:
	rm $(OBJ_FILES)
