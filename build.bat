@echo off
echo Building program... Copyright HP 15C 2017
g++ -std=c++11 -Wall -Werror *.cpp trig_functions\*.cpp exp_functions\*.cpp util_functions\*.cpp unit_tests\*.cpp complex_operators\*.cpp -lm -o out.exe
