CC=gcc
FLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
SR_1=0-main.c 0-linear.c
SR_2=1-*.c
all : ex_1
DEBUGER=gdb

ex_1 : 0-main.c 0-linear.c
	$(CC) $(FLAGS) $(SR_1) -o 0-linear
	betty 0-*.c
ex_2 :  1-*.c
	$(CC) $(FLAGS) $(SR_2) -o 0-binary
	chmod u+x 0-binary
	betty 1-*.c

dex_1 : 0-main.c 0-linear.c
	$(CC) $(FLAGS) $(SR_1) -o 0-linear.out -g
	chmod u+x  0-linear.out  0-linear
	$(DEBUGRER) 0-linear.out
	rm 0-*.out
dex_2 :  1-*.c
	$(CC) $(FLAGS) $(SR_2) -o 0-binary.out -g
	chmod u+x  0-binary.out 0-binary 
	$(DEBUGRER) 0-binary.out 
	rm 0-binary.out
tes_1  : tes.c 1-binary.c
	$(CC) $(FLAGS) tes.c 1-binary.c -o tes_1
clean :
	rm *~
