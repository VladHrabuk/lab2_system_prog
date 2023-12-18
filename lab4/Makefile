CC=g++
CFLAGS=-c

all: calc calc_lib.a

calc: calculator.o complex_calculator.o main.o
	$(CC) calculator.o complex_calculator.o main.o -o $@

calc_lib.a: complex_calculator.o
	ar -rcs calc_lib.a complex_calculator.o

calculator.o: calculator.cpp calculator.h
	$(CC) $(CFLAGS) calculator.cpp

complex_calculator.o: complex_calculator.cpp calculator.h
	$(CC) $(CFLAGS) complex_calculator.cpp

main.o: main.cpp calculator.h
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *.o calc calc_lib.a
