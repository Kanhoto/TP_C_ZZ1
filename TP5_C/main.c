#include "TP5.h"

int main()
{
    int tableau[taille][taille];
    int couleurC;
    int repetitions=1;
    initialiser(tableau);
    afficherGrille(tableau);

    while(!fin(tableau) && couleurC!=999 && repetitions<23)
    {
        couleurC=-1;
        while(((couleurC<0)||(couleurC>5))&&(couleurC!=999))
        {
            printf("veuillez entrer une couleur --> ");
            scanf("%d",&couleurC);
            printf("\n");
        }
        if(couleurC!=999)
        {
            remplir(tableau,tableau[0][0],couleurC,0,0);
            afficherGrille(tableau);
            repetitions++;
        }
    }

    if(fin(tableau))
    {
        printf("\nVous avez gagné au bout de %d essai\n",repetitions);
    }
    else if(couleurC==999)
    {
        printf("\nVous avez quitter\n");
    }
    else if(repetitions>=23)
    {
        printf("\nVous avez perdu\n");
    }

    return 0;
}