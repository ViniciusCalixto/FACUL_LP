#include <stdio.h>
#include <stdlib.h>


void main(){
    float salario = 0, inss =0, ir =0, sal_liquido = 0;

    printf("seu salario bruto: ");
    scanf("%f", &salario);

    if(salario <= 1693.72){
        inss = salario * 0.08;
    }else if(salario >= 1693.73 && salario <= 2822.90 ){
        inss = salario * 0.09;
    }
    sal_liquido = (salario - inss) - ir;

    printf("desconto inss: %.2f\n",inss);
    printf("salario liqui: %.2f\n",sal_liquido);
}