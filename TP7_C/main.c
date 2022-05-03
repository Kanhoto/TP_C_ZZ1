#include "TP7.h"

int main(void)
{
    liste_t *entete = (liste_t*)malloc(sizeof(liste_t));
    cellule_t *cel = (cellule_t*)malloc(sizeof(cellule_t));
    entete->tete = cel;
    entete->fin = cel;
    int continuer = 1;

    while(continuer)
    {
    	adjonction(entete);
    	printf("Une autre chaine ? : ");
    	scanf("%d",&continuer);
    }

    return 0;
}