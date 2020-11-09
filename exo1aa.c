#include<stdio.h>
#include<stdlib.h>
int main(){ 
    int a ;
    while(1){ 
    printf("Veuillez saisir un nombre compris entre 1 et 10\n");
    scanf("%d",&a);
   
   
    if(a>=1 && a<=10)
    {
        printf("le nombre saisie est bon\n") ;
        printf("%d\n",a);}
    else{              
        printf("le nombre est incorrect , veuillez saisir un autre\n");

    }
 
 }
    return 0; 
}