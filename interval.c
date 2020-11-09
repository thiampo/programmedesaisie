#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    while (1)
    {
        printf("Veuillez saisir un nombre: \n");
        scanf("%d",&a);

        if (a>=1 && a<=10)
        {
            /* code */
            printf("Le nombre saisis est correcte: \n");
            printf("%d\n",a);
        }else{
            printf("Le nombre saisis est incorrecte: \n");
        }
    }
    return 0;
}