CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -g -O3
ifndef prefix
	prefix=/usr
endif

pac: main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $^

install: pac
	install -D -m 0755 pac $(prefix)/bin/pac

clean:
	rm -f pac
