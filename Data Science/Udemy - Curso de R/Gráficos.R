#Criando dados
dados<- c(3,4,2,2,1)

#Gr�ficos Simples:
plot(dados) #gr�fico de pontos.
plot(dados,type="l") #gr�fico de linha.
plot(dados,type="o") #gr�fico de pontos com linhas.
barplot(dados)#Gr�fico de barras
hist(dados)#Histograma
boxplot(dados)#Boxplot
pie(dados)#Gr�fico de pizza

#Adcionando detalhes:
barplot(dados, #grafico
main= "Titulo do gr�fico", #titulo
xlab= "Nome do eixo X", #Eixo X
ylab= "Nome do eixo Y", #Eixo Y
names.arg = c("Segunda","Ter�a","Quarta","Quinta","Sexta") #nomes do eixo X

