#include<iostream>

using namespace std;

int main(){
	int x,y,i,s,p;
	cin>>x>>y;
	
	// Detectando o maior(p) e menor(s) valor.	
	//s: Start for.
	//p: Pause for.
	if(x>y)
	{s=y;//Se y for menor, atribuir a s.
	 p=x;//Se x for maior, atribuir a p.
	}
	else
	{s=x;//Se x for menor, atribuir a s.
	 p=y;//Se y for maior, atribuir a p.
	}
	
	s++;
	
	for(i=s;i<p;i=i+1)
	//i=s: inicio do loop.
	//i<p: condição para finalizar loop.
	{
		if((i%5)==2 or (i%5)==3)
		{
			cout<<i<<endl;
		}
	}
		
}