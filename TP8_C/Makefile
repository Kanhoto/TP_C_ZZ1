prog : main.c histo.c liste.c commun.h histo.h liste.h
	gcc -c main.c -Wall -Wextra -g -o main.o
	gcc -c liste.c -Wall -Wextra -g -o liste.o
	gcc -c histo.c -Wall -Wextra -g -o histo.o
	gcc -o prog main.o liste.o histo.o -lSDL2 -lSDL2_ttf
	rm *.o
