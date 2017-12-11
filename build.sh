#!/bin/bash
echo Building program... Copyright HP 15C 2017
g++-7 -Wall -Werror *.cpp trig_functions/*.cpp exp_functions/*.cpp util_functions/*.cpp unit_tests/*.cpp complex_operators/*.cpp -lm -o prog.out
