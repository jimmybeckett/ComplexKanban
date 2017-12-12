CC=g++
CFLAGS=-Wall -Werror -g -std=c++11
SOURCES=*.cpp trig_functions/*.cpp exp_functions/*.cpp util_functions/*.cpp unit_tests/*.cpp complex_operators/*.cpp
CLIBS=-lm
OUTFILE=prog.out

all:
	$(CC) $(CFLAGS) $(SOURCES) $(CLIBS) -o $(OUTFILE)
	@echo Make run to run.

run:
	./prog.out
