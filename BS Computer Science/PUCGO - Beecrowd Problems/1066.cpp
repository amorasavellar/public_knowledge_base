#include<iostream>

using namespace std;

int main(){
	
	int x,i,par,impar,positivo,negativo;
	par=0;//Variavel que receberá o numero de numeros pares.
	impar=0;//Variavel que receberá o numero de numeros impares.
	positivo=0;//Variavel que receberá o numero de numeros positivos.
	negativo=0;//Variavel que receberá o numero de numeros negativos.	
	
	for(i=0;i<5;i=i+1)
	{
		cin>>x;
		
		if((x%2)==0)
		{
			par= par+1;
		}
			else
			{
				impar= impar+1;
			}	
		
		if(x>0)
		{
			positivo= positivo+1;
		}
		if(x<0)
		{
			negativo= negativo+1;
		}
	}
	
	cout<<par<<" valor(es) par(es)"<<endl;
	cout<<impar<<" valor(es) impar(es)"<<endl;
	cout<<positivo<<" valor(es) positivo(s)"<<endl;
	cout<<negativo<<" valor(es) negativo(s)"<<endl;
}