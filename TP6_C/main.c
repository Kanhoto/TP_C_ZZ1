#include "TP6.h"
#include "TP5.h"

//gcc  main.c -o prog -lSDL2 -lSDL2_gfx -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lSDL2_net

int main()
{
    int running=1;
    int width=1080;
    int height=860;
    int tableau[taille][taille];
    SDL_Window *window;
    SDL_Renderer *renderer;
    SDL_Rect rect;
    SDL_Event event;

    initialiser(tableau);
    initSDL(&window, &renderer, width, height);

    afficherEcran(&renderer,rect, width, height, tableau);
    while ((running) && (!fin(tableau))) 
    {
        while (SDL_PollEvent(&event))
        {
            switch(event.type)
            {
                case SDL_WINDOWEVENT:
                    printf("window event\n");
                    switch (event.window.event)  
                    {
                        case SDL_WINDOWEVENT_CLOSE:  
                            printf("appui sur la croix\n");	
                            break;
                        case SDL_WINDOWEVENT_SIZE_CHANGED:
                            width = event.window.data1;
                            height = event.window.data2;
                            printf("Size : %d%d\n", width, height);
                        default:
                            afficherEcran(&renderer,rect, width, height, tableau);
                    }   
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    printf("Appui :%d %d\n", event.button.x, event.button.y);
                    remplir(tableau,tableau[0][0],tableau[event.button.y/(height/taille)][event.button.x/(width/taille)],0,0);
                    afficherEcran(&renderer,rect, width, height, tableau);
                    break;
                case SDL_QUIT : 
                    printf("on quitte\n");    
                    running = 0;
            }
        }	
        SDL_Delay(1); //  delai minimal
    }

    if(fin(tableau))
    {
        printf("Vous avez gagnez\n");
    }
    SDL_Delay(5000);
    TTF_Quit();
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}