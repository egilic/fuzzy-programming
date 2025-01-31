CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

TARGET = main

all: $(TARGET)

$(TARGET): main.cpp bananas.cpp testcases.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp bananas.cpp testcases.cpp

clean:
	rm -f $(TARGET)
