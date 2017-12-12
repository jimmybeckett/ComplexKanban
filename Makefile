objects := $(wildcard *.o complex_operators/*.o exp_functions/*.o trig_functions/*.o unit_tests/*.o util_functions/*.o)
complex_operators := $(wildcard complex_operators/*.o)
exp_functions := $(wildcard exp_functions/*.o)
trig_functions := $(wildcard trig_functions/*.o)
util_functions := $(wildcard util_functions/*.o)
unit_tests := $(wildcard unit_tests/*.o)

VPATH = complex_operators exp_functions trig_functions unit_tests util_functions

out : $(objects)
	g++ -o out $(objects)
	
run.o : $(objects)

unit_tests.o : unit_tests.h $(complex_operators) $(exp_functions) $(trig_functions) $(util_functions) 
	unit_tests.o

exp_functions.o : exp_functions.h $(util_functions) $(complex_operators)
	exp_functions.o

trig_functions.o : trig_functions.h complex.h $(exp_functions) $(complex_operators)
	trig_functions.o

util_functions.o : util_functions.h $(complex_operators)
	util_functions.o

complex_operators.o : complex.h
	complex_operators.o