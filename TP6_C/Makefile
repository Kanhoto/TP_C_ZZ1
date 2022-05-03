prog : main.c TP6.c TP6.h
	gcc -c TP6.c -Wall -Wextra -g
	gcc -c main.c -Wall -Wextra -g -o main.o 
	gcc -o prog main.o -lSDL2 -lSDL2_gfx -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lSDL2_net
	rm *.o
