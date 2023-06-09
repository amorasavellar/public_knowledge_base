#Como lidar com valores inexistentes

dados<- data.frame("a" = c(1,3,NA), "b" = c(4,NA,4), "c" = c(3,3,3))
#data.frame: Cria uma tabela
#"a","b"e"c": nome das colunas
#c(): insere os dados dentro dos () em suas respectivas colunas
dados
#Imprime a tabela

mean(dados$c)
#M�dia da col "c"
#R: (3)
mean(dados$a)
#M�dia da col "a". N�O VAI APRECER O QUE QUEREMOS
#R: (NA)

#Ent�o, para resolver esse caso.

mean(dados$a,na.rm = TRUE)
#M�dia da col  "a". VAI DAR CERTO.
#na.rm = TRUE: Remove o "NA" e tira a media apenas dos numeros da coluna

#Outras maneiras


#o mesmo � v�lido para fun��es como sd(), median(), etc.

na.omit(dados) #Omite todas linhas que tem NA

complete.cases(dados) #Da as linhas em que todas as observa��es est�o completas.

dados[complete.cases(dados),]#Apenas linhas com dados completos

is.na(dados) #Vai perguntar pra cada elemento do DataFrame se � NA ou n�o.

dados[is.na(dados)==TRUE]<- 0 #Substituindo NA pelo valor zero.
dados
