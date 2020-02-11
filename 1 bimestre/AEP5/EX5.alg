//EX5
algoritmo "semnome"

var
idade:vetor[1..5] de inteiro
mid,x,y:inteiro
inicio
mid <- 0
para x de 1 ate 5 faca
   Escreva ("Informe uma idade: ")
   leia (idade[x])
   se idade[x] > mid entao
      mid <- idade[x]
      y <- x
   fimse
fimpara
Escreva ("A maior idade é",mid," no índice",y)
fimalgoritmo
