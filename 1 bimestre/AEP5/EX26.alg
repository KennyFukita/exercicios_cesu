//EX26
algoritmo "semnome"

var
V1,V2:vetor[1..20] de inteiro
y,fat,x:inteiro
inicio
para x de 1 ate 20 faca
   fat <- 1
   repita
      escreva ("Informe um valor: ")
      leia (V1[X])
      se (V1[X] > 7) ou (V1[X] < 0) entao
         escreval ("Valor inválido")
      fimse
   ate (V1[X]) <= 7) E (V1[X]) >= 0
   para y de V1[X] ate 1 passo -1 faca
      fat <- fat*y
   fimpara
   V2[X] <- fat
   fat <- 1
fimpara
escreval
escreva ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
escreval
para x de 1 ate 20 faca
Escreval ("O fatorial de",V1[X], " é:",V2[X])
fimpara
fimalgoritmo
