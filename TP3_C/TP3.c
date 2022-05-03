#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// #define NB 3

// int guichet_A=1,guichet_B=1,guichet_C=1;

// void gestion(int *tab)
// {
//     int i=0;
//     for(i=0; i<NB; i++)
//     {
//         tab[i] = 0;
//     }
// }

void vecteurToFile(FILE * flux, double * vecteur, int ordre)
{
    printf("%li",*vecteur);
}

TEST(AffichageA) 
{
   // vecteur statique a afficher
   float v1 [] = { 1.0, 2.0, 3.0 };
   // creation du flux de texte => buffer
   char buffer[1024];
   FILE * file = fmemopen(buffer, 1024, "w");
   // REQUIRE ( NULL != file); // creation du fichier impossible ?

   vecteurToFile(file, v1, 3);
   fclose(file);

   // verification de ce qui est envoye sur le flux
   // chaque composante est affichee avec trois chiffres apres la virgule
   // %.3f
   CHECK( 0==strcmp(buffer, "3\n1.000 2.000 3.000") );
}

int main()
{
    // int *tab[NB];
    // tab[0] = &guichet_A;
    // tab[1] = &guichet_B;
    // tab[2] = &guichet_C;
    // int i=0;
    // for(i=0; i<NB; i++)
    // {
    //     printf("%d",*tab[i]);
    // }
    // gestion(*tab);
    // printf("\n");
    // for(i=0; i<NB; i++)
    // {
    //     printf("%d",*tab[i]);
    // }

    // FILE * fichier;
    // float reel;
    // char chaine[80];

    // fichier = fopen("text", "r");
    // if (!fichier) 
    // {
    //     printf("on ne peut pas lire le fichier\n");
    // } 
    // else
    // {
    //     fprintf(fichier, "du texte %d", 10);
    //     fscanf(fichier, "%f", &reel);
    //     fgets(chaine, 80, fichier);
    //     printf("\n%s et %f",chaine,reel);
    //     fclose(fichier);
    // }

    TEST();

    return 1;
}