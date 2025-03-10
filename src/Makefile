CXX = g++
CXXFLAGS = -Wall -Wextra -O2
TARGET_DIR = ../usr/bin
TARGET = isPrime
SRC = main.cpp
OBJECTS= $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS) create_target_dir
	$(CXX) $(CXXFLAGS) -o $(TARGET_DIR)/$@ $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

create_target_dir:
	mkdir -p $(TARGET_DIR)

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean create_target_dir
