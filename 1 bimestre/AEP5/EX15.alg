//EX15
algoritmo "semnome"

var
Bim,Bim2,Sub,Sub2:vetor[1..30] de inteiro
RA:vetor[1..30] de inteiro
Aluno:vetor[1..30] de caractere
M:vetor[1..30,1..4] de inteiro
aa,Subse,p,soma,x,y:inteiro
inicio
para x de 1 ate 30 faca
   Escreva ("Informe o nome: ")
   leia (Aluno[x])
   Escreva ("Informe o RA: ")
   leia (RA[x])
   para y de 1 ate 4 faca
      Escreva ("Informe as notas: ")
      leia (M[x,y])
   fimpara
   para p de 1 ate 1 faca
      escreva ("Informe a nota do primeiro bimestre: ")
      leia (Bim[p])
      escreva ("Informe a nota do segundo bimestre: ")
      leia (Bim2[p])
   fimpara

   Escreva ("O aluno fez prova substitutiva ? Sim[1] Não[0] ")
   leia (Subse)
   se Subse = 1 entao
      Escreva ("Para qual bimestre foi realizada a sub ? 1 bimestre[1] 2 bimestre[2]")
      leia (aa)
      se aa = 1 entao
         Escreva ("Digite a nota da sub: ")
         leia (Sub[x])
      senao
          Escreva("Digite a nota da sub: ")
         leia (Sub2[x])

      fimse
   fimse


   limpatela
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
