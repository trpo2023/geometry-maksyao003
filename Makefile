
 all : geometry
 
 geometry : geometry.c
	gcc -Wall -Werror geometry.c -o geometry -lm

