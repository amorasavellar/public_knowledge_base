#Ajuda no R

#N�o vai tirar a media pois, 8 est� como string.
mean ("8") #mean (Fun��o que tira a media de um numero)

#Vai retornar a meia pois entre 1 e 8 pois est�o como numeros.
mean (1:8)

#Vai abrir a aba de ajuda
help.start() 

#Vai explicar como usar "*" ou qualquer coisa que voc� quiser.
help("*")

#Buscas o nome correto de uma fun�ao desejada.
help.search("mean")

#Fun��es semelhantes as fun��es Help.
?sd #Mesma coisa do help
??sd #Mesma coisa do help.search

#Busca por todas as fun�oes cuja o nome est� entre "".
apropos("help") #Fun��es contendo "help".
apropos("mean") 

#Da um exemplo completo de como utilizar uma fun��o.
example(mean)
example(plot)
