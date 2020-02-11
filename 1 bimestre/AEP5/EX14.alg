//EX14
algoritmo "semnome"

var
Aluno:vetor[1..30] de caractere
M:vetor[1..30,1..4] de inteiro
soma,x,y:inteiro
inicio
para x de 1 ate 30 faca
   Escreva ("Informe o nome: ")
   leia (Aluno[x])
   para y de 1 ate 4 faca
      Escreva ("Informe as notas: ")
      leia (M[x,y])
   fimpara
fimpara
limpatela
para x de 1 ate 30 faca
   para y de 1 ate 4 faca
      soma <- soma + (m[x,y])
   fimpara
   se soma/4 > 6 entao
      escreval ("O aluno ",aluno[x], " foi aprovado com média: ",soma/4)
      soma <-0
   senao
      escreval ("O aluno ",aluno[x], " foi reprovado com média: ",soma/4)
      soma <-0
   fimse
fimpara
fimalgoritmo
