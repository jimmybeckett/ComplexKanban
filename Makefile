objects = *.o complex_operators/*.o exp_functions/*.o trig_functions/*.o unit_tests/*.o util_functions/*.o
#fix objects

out : $(objects)
        cc -o out $(objects)
	
run.o : complex.h exp_functions.h trig_functions.h unit_tests.h util_functions.h
unit_tests.o : complex.h exp_functions.h trig_functions.h util_functions.h
complex_operators.o : complex.h
exp_functions.o : complex.h util_functions.h
trig_functions.o : complex.h exp_functions.h
util_functions.o : complex.h
complex_operators.o : complex.h

.PHONY : clean
clean :
        rm edit $(objects)