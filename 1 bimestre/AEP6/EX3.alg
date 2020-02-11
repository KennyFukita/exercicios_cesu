//EX3
algoritmo "semnome"

var
V,V2:vetor[0..300] de inteiro
inicial,meio,final,x,y,z,m,n,p:inteiro
igual:caractere
dado_encontrado,achou:logico
inicio
para x de 1 ate 300 faca
   repita
      igual <- "falso"
      V[X] <- randi(1000)
      para y de 1 ate x-1 faca
         se V[X] = V[Y] entao
            igual <- "verdadeiro"
         fimse
      fimpara
   ate igual = "falso"
fimpara

Escreva ("Informe um valor para buscar dentro do vetor: ")
leia (z)
//busca sequencial s/ordenar
achou <- falso
x <- 0
enquanto (achou = falso) e (x<300) faca
   x <- x + 1
   se v[x] = z entao
      achou <- verdadeiro
      m <- x
   fimse
fimenquanto

//passar o vetor sem estar ordenado para um outro vetor com os mesmos valores, só que ordenado
para x de 1 ate 300 faca
   V2[X] <- V[X]
fimpara

//busca sequencial ordenado
x <- 0
para x de 1 ate 299 faca
   para y de x+1 ate 300 faca
      Se V2[y] < V2[x] entao
         V2[0] <- V2[x]
         V2[x] <- V2[y]
         V2[y] <- V2[0]
      fimse
   fimpara
fimpara
achou <- falso
x <- 0
enquanto (achou = falso) e (x<300) faca
   x <- x + 1
   se V2[x] = z entao
      achou <- verdadeiro
      n <- x
   fimse
fimenquanto

//busca binária
inicial <- 1
final <- 300
dado_encontrado <- falso
enquanto (inicial <= final) e nao dado_encontrado faca
   meio <- (inicial + final) DIV 2
   p <- p + 1
   se V2[meio] = z entao
      dado_encontrado <- verdadeiro
   fimse
   se V2[meio] > z entao
      final <- meio - 1
   senao
      inicial <- meio + 1
   fimse
fimenquanto

Escreval ("Utilizando busca sequencial sem ordenar o vetor, foram feitas", m," comparações")
Escreval ("Utilizando busca sequencial ordenando o vetor, foram feitas", n," comparações")
Escreval ("Utilizando busca binária, foram feitas", p," comparações")
fimalgoritmo
