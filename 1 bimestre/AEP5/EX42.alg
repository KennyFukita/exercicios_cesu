//EX42
algoritmo "semnome"

var
V1:vetor[1..5] de caractere
V2:vetor[1..50] de caractere
x,i,y:inteiro
m,z:caracter
inicio
para x de 1 ate 5 faca
   escreva ("Informe um nome: ")
   leia (V1[X])
   z <- V1[X]
   para y de 1 ate x faca
      se z > V1[y] entao
         M <-v1[x]
      fimse
   fimpara
fimpara
para x de 1 ate compr(m) faca
   V2[X] <- copia(M:X,1)
fimpara
para x de 1 ate compr(m) faca
escreval (v2[x])
fimpara
fimalgoritmo
