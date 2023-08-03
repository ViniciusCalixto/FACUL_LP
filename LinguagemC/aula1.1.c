#include <stdio.h>
#include <stdlib.h>


void main(){

    float nota1, nota2, media;

    printf("Digite nota 1: ");
    scanf("%f", &nota1);

    printf("Digite nota 2: ");
    scanf("%f", &nota2);

    printf("(nota1 + nota2) / 2 = %.2f \n", (nota1 + nota2) / 2);

    media = (nota1 + nota2) / 2;
    
    printf("Media: %.2f", media);

}