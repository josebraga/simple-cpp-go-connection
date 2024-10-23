# Makefile

# Compiler and Tools
CC = gcc
CXX = g++
GO = go

# Flags
CFLAGS = -fPIC -I.
CXXFLAGS = -I. -L.
LDFLAGS = -shared
GOBUILDFLAGS = -buildmode=c-shared

# Targets
all: main

libcallbacks.so: callbacks.c measured_color.h
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

libmeasurer.so: measurer.go measured_color.h
	$(GO) build $(GOBUILDFLAGS) -o $@ $<

main: main.cpp libmeasurer.so libcallbacks.so measured_color.h libmeasurer.h
	$(CXX) $(CXXFLAGS) -o $@ $< -lmeasurer -lcallbacks

run: main
	LD_LIBRARY_PATH=. ./main

clean:
	rm -f main libmeasurer.h *.so
