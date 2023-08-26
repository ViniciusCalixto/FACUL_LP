Algoritmo "CalculoPotencia"
Var
// Seção de Declarações das variáveis
   valorA, resultado: real
   valorB, contador: inteiro
   
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   Escreval("Calculo de [A] Elevado a [B]")
   Escreva("Digite numero [A]: ")
   Leia (valorA)
   Escreva("Digite numero [B]: ")
   Leia (valorB)

   resultado <- 1.0
   para contador de valorB ate 1 passo -1 faca
        resultado <- resultado * valorA
   fimpara
   
   escreval("")
   escreva("Resultado Final: ")
   escreva(resultado)
Fimalgoritmo
