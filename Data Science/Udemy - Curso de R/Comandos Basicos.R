#Comandos b�sicos:
1+1#ADI��O
2-1#SUBTRA��O
3*4#MULTIPLICA��O
6/3#DIVIS�O
2^3#POTENCIA��O
5%%2#DIVIS�O POR NUM. INT.

#Boleanos:
2<3#TRUE
1+2 == 3#TRUE
2>3#FALSE
1+2 == 4#FALSE

#Declarando variavel:
x<- 5 #FORMA 1
x = 5 #FORMA 2

#Alterando valor da variavel:
x = 4

#() usados em fun��es:
fun��o(argumento, argumento)

#Concatena��o: Fun��o "c" concatena elementos.
x = c(1,2,3) # Se tudo tiver em () imprime o objeto.

print (x)

# Dois pontos algo como "at�"
1:20

x<-20:30

# Coxetes acesso a elementos de um objeto
x[3]

#Operadores logicos:
x[x>25]#maior
x[x<25]#menor
x[x>22 & x<28]# "&" � igual "and"
x[x<23 | x>27]# "|" � igual "or"
x[x>22 & x!=28]#diferente

#Colocando fun�oes dentro de fun�oes.
#Semelhante a aritimetica.
x+1
(x+1)*2

#Fun��es ne mostram graficos:
plot(x)
plot(x^10)
plot(log(x))

#Tipos de dados em R
#1. Caracter(character): "a","swc","a1b","11"
#2. Num�rico(numeric): 2, 0.5
#3. Inteiro(integer): ,1,3,2L (letra L faz o R considerar 2 como num. int.)
#3. Logico(logical): TRUE, FALSE
#4. Complexo(complex): 1+4i

#Tipos de estruturas em R
#1. Vetor at�mico(atomic vector): vet_num <- c(1,2.5,4.5) 
#2. Lista(list): lista <- list(1:3,"a",c(TRUE, FALSE, TRUE), c(2.3,5.9))
#3. Matriz(matrix): matriz <- matrix(1:6,ncol = 3m nrow = 2)
#4. Data frame: df <- data.frame(x=1:3,y=c("a","b","c"))
#5. Array: array <- array(1:12, c(2,3,2))







