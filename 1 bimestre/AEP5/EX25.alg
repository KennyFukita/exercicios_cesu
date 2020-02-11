//EX25
algoritmo "semnome"

var
X:inteiro
V1,V2,V3:vetor[1..6] de inteiro
inicio
para x de 1 ate 6 faca
   repita
      escreva ("Informe um valor: ")
      leia (V1[X])
      se (V1[X]) < 0 entao
         escreval ("Valor inválido")
      fimse
   ate (V1[X]) > 0
   se (V1[X]) mod 2 = 0 entao
      V2[X] <- V1[X]
   senao
      V3[X] <- V1[X]
   fimse
fimpara
fimalgoritmo
