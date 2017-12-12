CC=g++
CFLAGS=-Wall -Werror -g -std=c++11
SOURCES=trig_functions/*.cpp exp_functions/*.cpp util_functions/*.cpp unit_tests/*.cpp complex_operators/*.cpp
MAINFILES=*.cpp
CLIBS=-lm
OUTFILE=libkanban.o
TESTFILEOUT=prog.out
TESTFILES=$(wildcard unit_tests/*.cpp)
LIBFILE=libkanban.a
ARCHIVER=ar
ARCHIVEROPTS=rvs

SOURCEFOLDERS:=exp_functions util_functions trig_functions complex_operators
SOURCEFILES=$(foreach x, $(SOURCEFOLDERS), $(wildcard $(x)/*.cpp))
OBJECTS=$(foreach x, $(basename $(SOURCEFILES)), $(x).o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< $(CLIBS) -o $@

$(LIBFILE): $(OBJECTS)
	$(ARCHIVER) $(ARCHIVEROPTS) $(LIBFILE) $(OBJECTS)
	@echo libfile made.

all: $(LIBFILE)
	@echo all done.

chunk:
	$(CC) $(CFLAGS) $(SOURCES) $(MAINFILES) $(CLIBS) -o $(TESTFILEOUT)
	./$(TESTFILEOUT)

$(TESTFILEOUT): $(LIBFILE)
	$(CC) $(CFLAGS) $(MAINFILES) $(TESTFILES) $(LIBFILE) $(CLIBS) -o $(TESTFILEOUT)

test: $(TESTFILEOUT)
	./$(TESTFILEOUT)

run: test
	@echo ran.

clean:
	rm -f $(OBJECTS)
	rm -f $(TESTFILEOUT) $(OUTFILE) $(LIBFILE)

