//EX13
algoritmo "semnome"

var
V:vetor[1..45] de inteiro
z,y:caractere
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
Z <- copia (y,x,1)
V[X] <- asc(z)
fimpara
fimalgoritmo
