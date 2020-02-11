//EX31
algoritmo "semnome"

var
Nomes:vetor[1..10] de caractere
maiornome:caractere
x,y:inteiro
inicio
maiornome <- " "
para x de 1  ate 10 faca
   escreva ("Informe um nome: ")
   leia (nomes[x])
   se (nomes[x]) > maiornome entao
      maiornome <- nomes[x]
   fimse
fimpara
escreva ("Maior nome é: ",maiornome)
fimalgoritmo
