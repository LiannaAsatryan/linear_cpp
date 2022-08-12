main: linear.o
	g++ main.cpp linear.o -o main
	./main

all: test clean

test: target
	./target
target: linear.o
	g++ linear_test.cpp linear.o -o target

linear.o: linear.cpp
	g++ -c linear.cpp -o linear.o

clean:
	rm -f main target output.txt result.txt linear.o

