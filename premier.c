#include<stdio.h>

int main ()
{ int  i,n, j=0;
printf ("saisirle nombre: ");
scanf("%d",&n);

for( i=1 ;i <= n ; i++){
 if(n%i==0){
     j++;
 }
}
if (j>2){
printf("%d n'est pas un nombre premier\n",n);

}else {
    printf("%d est un nombre premier\n",n);
}
    return 0;

 }