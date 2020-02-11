//EX2
algoritmo "semnome"

var
V:vetor[1..10] de caractere
inicial,meio,final,x,y:inteiro
z,igual,tmp:caractere
found:logico
inicio
para x de 1 ate 10 faca
   repita
      igual <- "falso"
      Escreva ("Informe um nome: ")
      leia (V[X])
      para y de 1 ate x-1 faca
         se V[X] = V[Y] entao
            igual <- "verdadeiro"
            Escreval ("Já existe esse nome...")
         fimse
      fimpara
   ate igual = "falso"
fimpara

limpatela

Para x de 1 ate 9 faca
   Para y de 1 ate 10-x faca
      Se V[y] > V[y+1] entao
         tmp <- V[y]
         V[y] <- V[y+1]
         V[y+1] <- tmp
      fimse
   Fimpara
Fimpara

Escreval ("Vetor ordenado:")

para x de 1 ate 10 faca
Escreval (V[X])
fimpara

inicial <- 1
final <- 10
found <- falso

Escreva ("Informe um nome para buscar dentro do vetor: ")
leia (z)
enquanto (inicial <= final) e nao found faca
   meio <- (inicial + final) DIV 2
   se V[meio] = z entao
      found <- verdadeiro
   fimse
   se V[meio] > z entao
      final <- meio - 1
   senao
      inicial <- meio + 1
   fimse
fimenquanto

se found = verdadeiro entao
Escreval ("O nome informado se encontra na posição: ",meio)
senao
Escreval ("Nome não encontrado")
fimse
fimalgoritmo
