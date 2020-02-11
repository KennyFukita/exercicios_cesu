//EX1
algoritmo "semnome"

var
V:vetor[0..20] de inteiro
inicial,meio,final,x,y,z:inteiro
igual:caractere
dado_encontrado:logico
inicio
para x de 1 ate 20 faca
   repita
      igual <- "falso"
      repita
         Escreva ("Informe o",x," valor: ")
         leia(V[x])
         se (V[X] > 99) ou (V[X] < 1) entao
            Escreval ("Valor inválido")
         fimse
      ate  (V[X] <= 99) e (V[X] >= 1)
      para y de 1 ate x-1 faca
         se V[X] = V[Y] entao
            igual <- "verdadeiro"
            Escreval ("Já existe esse valor...")
         fimse
      fimpara
   ate igual = "falso"
fimpara

limpatela

Para x de 1 ate 19 faca
   Para y de x+1 ate 20 faca
      Se V[y] < V[x] entao
         V[0] <- V[x]
         V[x] <- V[y]
         V[y] <- V[0]
      fimse
   Fimpara
Fimpara

Escreval ("Vetor ordenado:")

para x de 1 ate 20 faca
Escreval (V[X])
fimpara

inicial <- 1
final <- 20
dado_encontrado <- falso

Escreva ("Informe um valor para buscar dentro do vetor: ")
leia (z)
enquanto (inicial <= final) e nao dado_encontrado faca
   meio <- (inicial + final) DIV 2
   se V[meio] = z entao
      dado_encontrado <- verdadeiro
   fimse
   se V[meio] > z entao
      final <- meio - 1
   senao
      inicial <- meio + 1
   fimse
fimenquanto

se dado_encontrado = verdadeiro entao
Escreval ("O valor informado se encontra na posição: ",meio)
senao
Escreval ("Valor não encontrado")
fimse
fimalgoritmo

