

  Hello : main.o
	gcc main.o -o Hello
	
  main.o : main.c
	gcc -c -Wall -Werror main.c -o main.o
		

      
