#include<iostream>

using namespace std;

int main(){
	
	int x,i;
	cin>>x;//Lendo numero

	//Parametro 1: i=1, por que x/0 da erro.
	//Parametro 2: i<=x, por que o loop só vai continuar enquanto i for menor ou igual a x.
	//Parametro 3: i=i+2, por que após a segunda rodada do loop, o valor impresso de i mudara.
	for(i=1;i<=x;i=i+2)
	{
		cout<<i<<endl; // Imprimindo valor de i.
	}
}