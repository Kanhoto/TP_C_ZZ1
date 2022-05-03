#ifndef HISTO
#define HISTO

#include "commun.h"
#include "liste.h"

#define HISTOSIZE 21

typedef struct gdata_s {
    SDL_Window   * window;
    SDL_Renderer * renderer;
    TTF_Font     * font;       
    int            width;
    int            height;
} gdata_t;

typedef int histogram_t[HISTOSIZE];

void computeHisto(histogram_t h, list_t l);
void displayHisto(histogram_t h);
int maxHisto(histogram_t h);
float meanHisto(histogram_t h);
int countHisto(histogram_t h);
void displayString(gdata_t g, char * chaine, int x, int y);
void displayGraphicalHisto(gdata_t g, histogram_t h);
void displayGraph(histogram_t h);
void displayText(histogram_t h);

#endif