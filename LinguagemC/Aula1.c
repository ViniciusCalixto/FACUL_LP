#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[30];
    char endereco[30];
    int idade;

    printf("Digite Nome: ");
    scanf("%s", nome);

    printf("Digite Endereco: ");
    scanf("%s", endereco);

    printf("Digite idade: ");
    scanf("%d", &idade);

    printf("\n\n");
    printf("Nome: %s\n",nome);
    printf("Endereco: %s\n",endereco);
    printf("Idade: %d\n",idade);

    return 0;
}