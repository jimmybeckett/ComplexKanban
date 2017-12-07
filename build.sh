#!/bin/sh
echo Building program... Copyright HP 15C 2017
g++ -Wall -Werror *.cpp trig_functions/*.cpp exp_functions/*.cpp other_functions/*.cpp unit_tests/*.cpp unit_tests/tests/*.cpp advanced_trig_functions/*.cpp basic_functions/*.cpp basic_trig_functions/*.cpp log_functions/*.cpp polar_functions/*.cpp power_functions/*.cpp -o prog.out
