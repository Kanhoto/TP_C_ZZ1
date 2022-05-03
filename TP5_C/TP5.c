#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define couleur 6
#define taille 12

void initialiser(int tableau[][taille])
{
    srand(time(NULL));
    int ligne,colonne;
    for(ligne=0; ligne<taille; ligne++)
    {
        for(colonne=0; colonne<taille; colonne++)
        {
            tableau[ligne][colonne]=rand()%couleur;
        }
    }
}

void afficherGrille(int tableau[][taille])
{
    int ligne,colonne;
    for(ligne=0; ligne<taille; ligne++)
    {
        for(colonne=0; colonne<taille; colonne++)
        {
            printf("\033[%dm%d \033[0m",41+tableau[ligne][colonne],tableau[ligne][colonne]);
        }
        printf("\n");
    }
}

int fin(int tableau[][taille])
{
    int gagner=1;
    int CouleurG = tableau[0][0];
    int ligne,colonne;
    for(ligne=0; ligne<taille; ligne++)
    {
        for(colonne=0; colonne<taille; colonne++)
        {
            if(tableau[ligne][colonne] != CouleurG)
            {
                gagner=0;
            }
        }
    }
    return gagner;
}

void remplir(int tableau[][taille], int couleurP, int couleurN, int ligne, int colonne)
{
    if(tableau[ligne][colonne] != couleurN)
    {
        if(tableau[ligne][colonne] == couleurP)
        {
            tableau[ligne][colonne] = couleurN;
            if(colonne<taille)
            {
                remplir(tableau,couleurP,couleurN,ligne,colonne++);
            }
            if(colonne>0)
            {
                remplir(tableau,couleurP,couleurN,ligne,colonne--);
            }
            if(ligne<taille)
            {
                remplir(tableau,couleurP,couleurN,ligne++,colonne);
            }
            if(ligne>0)
            {
                remplir(tableau,couleurP,couleurN,ligne--,colonne);
            }
        }  
    }  
}