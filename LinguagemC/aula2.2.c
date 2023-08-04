#include <stdio.h>
#include <stdlib.h>


void main(){
    int contador = 0;

    printf("digite um valor: ");
    scanf("%d",&contador);

    for(contador; contador >=1; contador --)  {
        printf("valor: %d\n",contador);
    }       
}