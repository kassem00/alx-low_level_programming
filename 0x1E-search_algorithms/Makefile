CC=gcc
FLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
SR_1=0-main.c 0-linear.c
SR_2=1-*.c
all : ex_1

ex_1 : 0-main.c 0-linear.c
	$(CC) $(FLAGS) $(SR_1) -o 0-linear
	betty 0-*.c
ex_2 :  1-*.c
	$(CC) $(FLAGS) $(SR_2) -o 0-binary
	betty 1-*.c
tes_1  : tes.c 1-binary.c
	$(CC) $(FLAGS) tes.c 1-binary.c -o tes_1
clean :
	rm *~
