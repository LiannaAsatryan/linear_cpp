#description of the main program
this program finds the solution of the ax+b=0 equation, where a and b numbers are written in the input file like this:
 num1 num2
 num1 num2
 ...
after the execution the answers will be store in the output file like this:
 answer1
 answer2
 ... 


#linear_test.cpp (testing file) description
This project performs the following operations for every line in the input file:
1)reads two input values from the input file,which are the <a> and <b> in 'ax+b=0' equation, 
2)writes the solution in the output file, 
3)compares the result value with the corresponding value in the golden file
4)writes the appropriate message in the result file
If the current values of the input file aren't real numbers, the answer is "mistake"
If the solution is (-inf, +inf), the answer is 'R'
if there is no solution the answer is "no solution"
in my golden_file all the double numbers' precisions are set to 3 (for excample if the result of the computation is 3.876543, the answer will be 3.876)

#files
 in this directory there are following files
* input.txt __ it is the file where our input values are written
* golden.txt __ it is the file where our correct answers are written
* Makefile
* linear.h __ this file contains the definitions of the functions in linear.cpp
* linear.cpp __ here are the functions which solve our main problem(the linear function and     other related functions)
* linear_test.cpp __ here the testing is performed
* main.cpp __ this file contains the program which solves our main problem (without testing)


the files that will be generated are 
*output.txt__here result-values are written
*result.txt__here test results are written(test passed or not)

#to run the main program type
 make 
to clean the generated files type
 make clean 

#to run the test you type
 make test
to clean the generated files type 
 make clean
