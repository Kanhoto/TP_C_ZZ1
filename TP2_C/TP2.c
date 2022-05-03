#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// void echange(char *source, char *destination)
// {
//     char temp = *destination;
//     *destination = *source;
//     *source = temp;
// }

// void EchangeParValeur(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void EchangeParAdresse(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
    
//     //int i  , *ptri  = &i;
//     char c1 = '1', *ptrc1 = &c1;

//     printf("ptri = %p ptrc1 = %p \n",ptri, ptrc1);
//     printf("ptri = %p ptrc1 = %p \n",ptri, ptrc1);
//     // seule la version suivante ne genere pas d'avertissement
//     printf("ptri = %p ptrc1 = %p \n",ptri, ptrc1);
//     printf("*ptri = %c et *ptrc1=%d", *ptri, *ptrc1);
    
//     ptri++;
//     ptrc1++;
    
//     printf("ptri = %p ptrc1 = %p \n",ptri, ptrc1);
//     // cela permet de voir la taille d'un int et d'un char en memoire
//     // sizeof(int)  sizeof(char)  

//     double d = 1;
//     double *ptrd = &d;

//     printf("vp --> %f, ac --> %p, ap --> %p \n",*ptrd,ptrd,&ptrd);
//     ptrd += 2;
//     printf("vp --> %f, ac --> %p, ap --> %p \n",*ptrd,ptrd,&ptrd);

//     char c2 = '2';
//     char *ptrc2 = &c2;
//     printf("c1 --> %c et c2 --> %c \n",c1,c2);
//     echange(ptrc1, ptrc2);
//     printf("c1 --> %c et c2 --> %c \n",c1,c2);

//     int a=2,b=3;
//     printf("a --> %d et b --> %d\n",a,b);
//     EchangeParValeur(a,b);
//     printf("a --> %d et b --> %d\n",a,b);
//     EchangeParAdresse(&a,&b);
//     printf("a --> %d et b --> %d\n",a,b);

//     return 0 ;
// }

// int compter1(char * chaine) 
// {   
//   int i = 0;

//   while (*(chaine+i) != '\0')
//      ++i;

//   return i; 
// }

// int compter2(char * chaine) 
// {   
//   char * s = chaine;

//   while (*chaine != '\0')
//      ++chaine;

//   return chaine - s; 
// }

// int compter3(char * chaine) 
// {   
//   char * s = chaine;

//   while (*chaine++);

//   return chaine - s; 
// }

// int main()
// {
//     int tab[] = {0,1,2,3,4,5};

//     printf("%lu %lu %lu\n", sizeof(char), sizeof(int), sizeof(double));

//     int  * p1;
//     char * p2;

//     p1 = tab; 
//     ++p1;
//     printf("%d ", *p1);

//     p2 = (char *) p1;
//     p2 += sizeof(int);

//     printf("%da", *((int*)p2));
//     printf("%d", *(p1+6));

//     //p1 = NULL;
//     //printf("%d", *p1);

//     printf("\ncp1 --> %d\ncp2 --> %d\ncp3 --> %d\n",compter1("isima"),compter2("isima"),compter3("isima"));

//     return 0;
// }


// void saisir(char *s) 
// {
//   printf("Saisir une chaine\n");
//   scanf("%s", s);
// }

// int main() 
// {
//     char p[20];
//     char *s = p;

//     printf("Entrer votre prenom. ");
//     saisir(s);
//     printf("Bonjour %s!\n", s);

//     if (!strcmp(s, "ddd"))
//     {
//         printf("bizarre \n");
//     }

//     return 0;
// }


int main()
{
    double *tab = NULL;
    int taille = 10;
    tab = (double*)malloc( taille * sizeof(double));
    for(int i=0; i<taille; i++)
    {
        tab[i] = i*i;
        printf("tab[%d] --> %f\n",i,tab[i]);
    }

    free(tab);
}
