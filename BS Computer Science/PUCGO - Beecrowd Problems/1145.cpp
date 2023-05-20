#include<iostream>

using namespace std;

int main(){
	
	int i,x,y,c,ca;
	cin>>x>>y;
	c=x; // quantidade de colunas.
	ca=0; // Contador Auxiliar de linhas.
	
	for(i=1;i<=y;i++)
	{
		cout<<i;//Imprime valor de i
		ca+=1; // contador recebe +1
		if(ca==c) //Se ca == x 
		{
			cout<<"\n";//pula linha.
			c=x+ca; //atribui em c , x+ca.
		}
		else // se nao.
		{
			cout<<" "; // dá espaço.
		}	
	}		
}