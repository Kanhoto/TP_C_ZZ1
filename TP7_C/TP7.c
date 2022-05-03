#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cellule 
{
	char             ligne[255];
	struct cellule * suiv;
} cellule_t;

typedef struct liste 
{
	cellule_t * tete;
	cellule_t * fin;
} liste_t;

void adjonction(liste_t *entete)
{
    cellule_t *cel = (cellule_t*)malloc(sizeof(cellule_t));
    if(cel == NULL)
    {
    	exit(-1);
    }
    fgets(cel->ligne, 255, stdin);
    cel->suiv = entete->fin;
    entete->tete = cel;
}