#!/bin/sh
echo Building program... Copyright HP 15C 2017
g++ -Wall -Werror *.cpp trig_functions/*.cpp exp_functions/*.cpp other_functions/*.cpp unit_tests/*.cpp unit_tests/tests/*.cpp -o prog.out
