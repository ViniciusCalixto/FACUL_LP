#include <stdio.h>
#include <stdlib.h>


void main(){
    int escolha = 0;

    do{
        printf("Digite codigo do Sabor \n");
        printf("\t (1) - Flocos \n");
        printf("\t (2) - Morango \n");
        printf("\t (3) - Chocolate \n");
        scanf("%d", &escolha);
    }while((escolha < 1) || (escolha > 3));
    switch (escolha)
    {
    case 1:
        printf("\t Escolheu flocos!\n");
        break;
    case 2:
        printf("\t Escolheu Morango!\n");
        break;
    case 3:
        printf("\t Escolheu Chocolate!\n");
        break;
    
    default:
        break;
    }
    
}