CXX = g++
CXXFLAGS = -std=c++14 -Wall -Wextra -O2
LIBSFLAGS = -lCatch2Main -lCatch2 -lm

TARGET_DIR = ../usr/bin/
CICD_DIR = ../cicd/

TARGET = isPrime
TARGET_TEST = tests
#SRC = main.cpp
#OBJECTS= $(SRC:.cpp=.o)

OBJS = $(patsubst %.cpp, $(TARGET_DIR)%.o, $(wildcard *.cpp))
OBJS_TEST = $(patsubst $(CICD_DIR)%.cpp, $(TARGET_DIR)%.o, $(wildcard $(CICD_DIR)*.cpp))

all: $(TARGET) $(TARGET_TEST)

$(TARGET): $(OBJS) #create_target_dir
	$(CXX) $(CXXFLAGS) -o $(TARGET_DIR)/$@ $(OBJS)

$(TARGET_DIR)%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TARGET_TEST)

$(TARGET_TEST): $(OBJS_TEST)
	$(CXX) $(OBJS_TEST) $(TARGET_DIR)$(TARGET).o -o $(TARGET_DIR)$@

$(TARGET_DIR)%.o: $(CICD_DIR)%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#create_target_dir:
#	mkdir -p $(TARGET_DIR)

#create_cicd_dir:
#	mkdir -p $(CICD_DIR)

package:
	dpkg-deb --build .
	mv ..deb $(TARGET).deb

clean:
	rm -f $(TARGET_DIR)*.o $(TARGET_DIR)$(TARGET) $(TARGET).deb

.PHONY: all clean test package #create_target_dir create_cicd_dir
