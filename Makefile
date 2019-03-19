CXXFLAGS = $(shell python-config --cflags)
LDFLAGS = $(shell python-config --ldflags)

all: cython
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o foo src/*.cpp

cython:
	cythonize src/foo.pyx

cpp : cython

.PHONY: clean
clean:
	$(RM) -rf build foo foo.h foo.cpp
