//EX18
algoritmo "ZapZap"

var
X,CONT,MAIORID:inteiro
media:real
idade:vetor[1..7] de inteiro
inicio
cont <- 0
maiorid <- 0
para x de 1 ate 7 faca
   Escreva ("Informe uma idade: ")
   leia (idade[x])
   cont <- cont + idade[x]
   se idade[x] > maiorid entao
      maiorid <- idade[x]
   fimse
fimpara
limpatela
media <- cont/7
Escreval ("A média das idades é: ",media)
Escreval ("A maior idade é: ",maiorid)
fimalgoritmo
