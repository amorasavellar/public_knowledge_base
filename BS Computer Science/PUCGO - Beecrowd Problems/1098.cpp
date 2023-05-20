#include<iostream>

using namespace std;

int main(){
	float i,j;
	int x,y;
	
	//i=0: Por que i deve começar valendo 0.
	//i<2.1: Loop só para quando i for menor que 2.1, ou seja, 2.0.
	//i=i+0.2: A cada rodada do loop é adicionado 0.2.
	for(i=0.0;i<2.1;i=i+0.2)
	{
		//j=1: Por que j deve começar com 1 como mostra no exercicio.
		//j<=3.0: Loop só para quando j for menor ou igual a 3.0.
		//j=j+1: A cada rodada do Loop j recebe 1.
		for(j=1.0;j<=3.0;j=j+1)
		{
			if(i>0 and i<1 or i>1 and i<2 )
			{// i resultando em valor considerado float
			cout<<"I="<<i<<" "<<"J="<<i+j<<endl;
			}
			else
			{// i resultando em valor considerado int
				y=j;
				x=i;
				cout<<"I="<<i<<" "<<"J="<<x+y<<endl;
			}
		}
	}
}

// I=0 J=1 // j+i=1 // 1+0=1
// I=0.2 J=1 // j+i=1.2 // 1+0.2=1.2
// I=2 J=?