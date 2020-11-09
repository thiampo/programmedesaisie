#include<stdio.h>
int tab[5];
int i ;
int somme = 0 ;
int main ()

{
   /* printf (" veuillez saisir la premier valeur du tableau 1\n");
     scanf("%d",&tab[0]);
     printf (" veuillez saisir la deuxieme valeur du tableau 2\n");
     scanf("%d",&tab[1]);

        printf (" veuillez saisir la troxieme valeur du tableau 3\n");
       scanf("%d",&tab[2]);
       printf (" veuillez saisir la quatrieme valeur du tableau 4\n");
      scanf(" %d",&tab[3]);
       printf (" veuillez saisir la cinquaime valeur du tableau 5\n");
       scanf("%d",&tab[4]);*/
 for ( i = 0 ; i<5; i++){
     printf( "veuillez saisir la valeur du tableau %d\n",i);
     scanf("%d",&tab[i]);
     
 }

 for(i=0;i<5;i++){
     printf("tab[%d]=%d\n",i,tab[i]);
 }
 somme = somme + tab[i];
 
 printf("%d+%d+%d+%d+%d=%d\n",tab[0],tab[1],tab[2],tab[3],tab[4],somme);

return 0 ;}
