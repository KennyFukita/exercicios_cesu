//EX12
algoritmo "semnome"

var
V:vetor[1..45] de caractere
y:caractere
x:inteiro
inicio
enquanto (compr(y) < 5) ou (compr(y) > 50) faca
   escreva ("Informe uma frase: ")
   leia (y)
   se (compr(y) < 5) ou (compr(y) > 50) entao
      escreval ("Frase inválida")
   fimse
fimenquanto
para x de 1 ate compr(y) faca
V[X] <- copia(y,x,1)
fimpara
fimalgoritmo
