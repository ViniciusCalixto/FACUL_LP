Algoritmo "ClassificarIdade"
Var
// Seção de Declarações das variáveis
   idade: inteiro
   
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva("Digite sua idade(apenas numeros): ")
   Leia (idade)

   se (idade > 1) e (idade < 18) entao
      Escreva("Menor de idade!")
   senao
      se (idade >= 18) entao
         Escreva("Maior de idade!")
      senao
         Escreva("Idade invalida!")
      fimse
   fimse
Fimalgoritmo
