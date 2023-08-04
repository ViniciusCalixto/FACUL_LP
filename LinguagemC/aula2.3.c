#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){
    char nome[30];
    int i;
    
    printf("digite o nome do aluno: ");
    gets(nome);

    for (i = 0; nome[i] != ' '; i++)
    {
        nome[i] = toupper(nome[i]);        
        printf("nome: %s", nome[i]);
    }
    getch();
}