CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -g -O3

pac: main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f pac
