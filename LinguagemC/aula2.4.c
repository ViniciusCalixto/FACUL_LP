#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){
    int matriz[2][2];
    int linha,coluna;
    
    
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0; coluna < 2; coluna++)
        {
            printf("valores da linha %d, coluna %d: ",linha ,coluna);
            scanf("%d", &matriz[linha][coluna]);            
        }          
    }
    for (linha = 0; linha < 2; linha++)
    {
        for (coluna = 0;coluna < 2;coluna++)
        {
            printf("%d \t", matriz[linha][coluna]);
        }
        printf("\n");                
    }   
        printf("veja sua matriz");
        printf("\n\n");  
    
}