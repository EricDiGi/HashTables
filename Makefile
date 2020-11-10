CXX = g++
CXXFLAGS = -g -std=c++11 -Wall

SRCS = $(wildcard *.hpp)
OBJECTS = $(SRCS: .hpp=.o)

all: Hash

clean:
	rm -rf *.dSYM
	$(RM) *.o *.gc* test/*.o Hash core main

Hash: $(OBJECTS) main.cpp Hash.cpp DoubleLinked.cpp Node.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^
