Algoritmo "ClassificarIdade"
Var
// Se��o de Declara��es das vari�veis
   idade: inteiro
   
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
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
