###########################
#
# Author: Alex Engle
# Makefile for Homework 1
# 1/22/19
# CS3560, Mourning
#
###########################

CXX = g++
CLIB = ar rcv
CFLAGS = -Wall -std=c++11
LIBRARY = lib
BIN = bin
SRC = src
INCLUDE = include
CINCLUDE = -I ./include

#Final Executable, to bin
$(BIN)/prog1.out: main.o $(LIBRARY)/replace.a
	mkdir -p $(BIN)
	$(CXX) $(CFLAGS) main.o $(LIBRARY)/replace.a -o $(BIN)/prog1.out

#Main source
main.o: $(SRC)/main.cc $(INCLUDE)/replace.h
	$(CXX) $(CFLAGS) $(CINCLUDE) -c  $(SRC)/main.cc

#Library, to lib
$(LIBRARY)/replace.a: replace.o
	mkdir -p $(LIBRARY)
	$(CLIB) $(LIBRARY)/replace.a replace.o

#Other source
replace.o:  $(SRC)/replace.cc $(INCLUDE)/replace.h
	$(CXX) $(CFLAGS) $(CINCLUDE) -c  $(SRC)/replace.cc
