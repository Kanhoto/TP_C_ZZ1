#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

#define taille 12
#define couleur 6

int initSDL(SDL_Window **window, SDL_Renderer **renderer, int width, int height)
{
    if (SDL_Init(SDL_INIT_VIDEO) == -1)
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); 
        return EXIT_FAILURE; 
    }

    *window = SDL_CreateWindow("SDL2 Programme 0.1", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
                width, height, 
                SDL_WINDOW_RESIZABLE); 
        
    if (*window == 0) 
    {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); 
        /* on peut aussi utiliser SLD_Log() */
    }

    *renderer = SDL_CreateRenderer(*window, -1, SDL_RENDERER_ACCELERATED ); /*  SDL_RENDERER_SOFTWARE */
    if (*renderer == 0) {
        fprintf(stderr, "Erreur d'initialisation de la SDL : %s\n", SDL_GetError()); 
        /* faire ce qu'il faut pour quitter proprement */
    }

    if (TTF_Init() != 0)
    {
        fprintf(stderr, "Erreur d'initialisation TTF : %s\n", TTF_GetError()); 
    }

    /* couleur de fond */
    SDL_SetRenderDrawColor(*renderer, 0, 0, 0, 0);
    SDL_RenderClear(*renderer);

    /* afficher à l'ecran */
    SDL_RenderPresent(*renderer);

    
    return 0;
}

void afficherEcran(SDL_Renderer **renderer,SDL_Rect rect, int width, int height, int tableau[][taille])
{
    int largeur,hauteur,i,R,G,B;
    srand(time(NULL));
    for(largeur=0; largeur<taille; largeur++)
    {
        for(hauteur=0; hauteur<taille; hauteur++)
        {
            switch(tableau[hauteur][largeur])
            {
                case 0: R=255; G=0; B=0; break;
                case 1: R=0; G=255; B=0; break;
                case 2: R=0; G=0; B=255; break;
                case 3: R=255; G=255; B=0; break;
                case 4: R=255; G=0; B=255; break;
                case 5: R=0; G=255; B=255; break;
                default: R=0; G=0; B=0; break; 
            }
            SDL_SetRenderDrawColor(*renderer, R, G, B, 0);
            rect.x = largeur * (width/taille);
            rect.y = hauteur * (height/taille);
            rect.w = width/taille;
            rect.h = height/taille;
            SDL_RenderFillRect(*renderer, &rect );   
            i++;
        }
    }
    /* afficher à l'ecran */
    SDL_RenderPresent(*renderer);
}