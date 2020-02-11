//EX5
algoritmo "semnome"

var
V:vetor[0..500] de inteiro
inicial,meio,final,x,y,z,m:inteiro
igual:caractere
dado_encontrado:logico
inicio
para x de 1 ate 500 faca
   repita
      igual <- "falso"
      repita
         V[X] <- randi(3000)
         se (V[X] > 3000) ou (V[X] < 1) entao
         fimse
      ate  (V[X] <= 3000) e (V[X] >= 1)
      para y de 1 ate x-1 faca
         se V[X] = V[Y] entao
            igual <- "verdadeiro"
         fimse
      fimpara
   ate igual = "falso"
fimpara

Para x de 1 ate 499 faca
   Para y de x+1 ate 500 faca
      Se V[y] < V[x] entao
         V[0] <- V[x]
         V[x] <- V[y]
         V[y] <- V[0]
      fimse
   Fimpara
Fimpara

inicial <- 1
final <- 500
dado_encontrado <- falso

Escreva ("Informe um valor para buscar dentro do vetor: ")
leia (z)
enquanto (inicial <= final) e nao dado_encontrado faca
   meio <- (inicial + final) DIV 2
   m <- m + 1
   se V[meio] = z entao
      dado_encontrado <- verdadeiro
   fimse
   se V[meio] > z entao
      final <- meio - 1
   senao
      inicial <- meio + 1
   fimse
fimenquanto

   Escreval ("Número de comparações realizadas: ",m)
se dado_encontrado = verdadeiro entao
   Escreval ("O valor informado se encontra na posição: ",meio)
senao
   Escreval ("Valor não encontrado")
fimse
fimalgoritmo
