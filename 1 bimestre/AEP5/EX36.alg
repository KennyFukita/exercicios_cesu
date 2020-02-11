//EX36
algoritmo "semnome"

var
NOM:vetor[1..40] de caractere
N1,N2,N3,N4:vetor[1..40] de inteiro
MEDIA:vetor[1..40] de real
X,Y:inteiro
inicio
Para X de 1 ate 40 faca
   Escreva ("Informe o nome: ")
   leia (NOM[X])
   Para Y de 1 ate 1 faca
      repita
         Escreva ("Informe a primeira nota: ")
         leia (N1[Y])
         se N1[Y] > 10 entao
            Escreval ("Nota inválida")
         fimse
      ate (N1[Y]) <= 10
      repita
         Escreva ("Informe a segunda nota: ")
         leia (N2[Y])
         se N2[Y] > 10 entao
            Escreval ("Nota inválida")
         fimse
      ate (N2[Y]) <= 10
      repita
         Escreva ("Informe a terceira nota: ")
         leia (N3[Y])
         se N3[Y] > 10 entao
            Escreval ("Nota inválida")
         fimse
      ate (N3[Y]) <= 10
      repita
         Escreva ("Informe a quarta nota: ")
         leia (N4[Y])
         se N4[Y] > 10 entao
            Escreval ("Nota inválida")
         fimse
      ate (N4[Y]) <= 10

      MEDIA[X] <- (N1[Y] + N2[Y] + N3[Y] + N4[Y]) / 4

   Fimpara
   limpatela
fimpara
para X de 1 ate 40 faca
   se MEDIA[X] < 6 entao
      Escreval ("O aluno ", NOM[X],"foi reprovado com a média: ",MEDIA[X])
   senao
      Escreval ("O aluno ", NOM[X],"foi aprovado com a média: ",MEDIA[X])
   fimse
fimpara
fimalgoritmo
