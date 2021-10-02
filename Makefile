calculator: calculator.o
	gcc -o calculator calculator.o
calculator.o: calculator.c
	gcc -Wall -Werror -pedantic -std=gnu99 -c calculator.c
