CXX=g++
CXXFLAGS=-std=c++23 -Werror -Wsign-conversion

# No .cpp source files for templates — everything is in headers!
# Only main.cpp and test.cpp are compiled.

all: demo
	./demo

demo: main.o
	$(CXX) $(CXXFLAGS) $^ -o demo

test: TestRunner.o
	$(CXX) $(CXXFLAGS) $^ -o test
	./test

TestRunner.o: test.cpp Container.hpp Stack.hpp Queue.hpp Algorithms.hpp doctest.h
	$(CXX) $(CXXFLAGS) --compile test.cpp -o TestRunner.o

main.o: main.cpp Container.hpp Stack.hpp Queue.hpp Algorithms.hpp
	$(CXX) $(CXXFLAGS) --compile main.cpp -o main.o

clean:
	rm -f *.o demo test