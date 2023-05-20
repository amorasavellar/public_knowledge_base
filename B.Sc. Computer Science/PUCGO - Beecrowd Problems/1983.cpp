#include<iostream>

	struct alunos{ //Estrutura de dados "alunos", contem id e nota dos alunos.
		int id;
		float nt;
	};
int main(){	
	
	float m =0.;
	short n_alunos, t=0, x; // short: tipo integral que é maior ou igual ao tamanho do tipo char, e menor ou igual ao tamanho do tipo int.
	
	scanf("%hd", &n_alunos); //scanf: Le dados
	struct alunos aluno[n_alunos]; //chamando a estrutura de dados aluno.
	while(t<n_alunos) //Loop caso n_alunos seja maior que 0
	{
		scanf("%d %f", &aluno[t].id, &aluno[t].nt); //lendo numero de id e notas
		if(aluno[t].nt > m) //Se nota maior que 0
		{
			m= aluno[t].nt; //maior nota entre os id's digitados
			x=t; //x recebe numero de alunos com notas maiores entre os demais
		}
	t++; //valor no contador após ter sido incrementado.
	}
	
	if(aluno[x].nt >= 8) // Notas maiores ou iguais a 8
	{printf("%d\n",aluno[x].id);} // imprimindo 
	else{
		printf("Minimum note not reached\n");
	}
}