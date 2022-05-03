#ifndef COMMUN
#define COMMUN

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

extern int ERROR;

#define ERROR_OK          0
#define ERROR_LIST_ALLOC  1
#define ERROR_FILE        1

#define DEBUG

#ifdef DEBUG
    #define LOG(A) printf A
#else
    #define LOG(A) 
#endif

#endif