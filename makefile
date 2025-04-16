CXX = g++
CXXFLAGS = -std=c++11 -Iinc

SRC = main.cpp src/merge.cpp
TARGET = main

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)