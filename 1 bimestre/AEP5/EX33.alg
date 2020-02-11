//EX33
algoritmo "semnome"

var
V1:vetor[1..20] de inteiro
x,y:inteiro
inicio
para x de 1 ate 20 faca
escreva ("Informe um valor: ")
 leia (V1[x])
fimpara
para x de 1 ate 10 faca
Y <- V1[X]
V1[X] <- V1[21-X]
V1[21-X] <- Y
fimpara
fimalgoritmo
