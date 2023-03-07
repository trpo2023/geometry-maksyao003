
 all : geometry.o
 
 geometry.o : geometry.c
	gcc -Wall -Werror geometry.c -o geometry -lm

