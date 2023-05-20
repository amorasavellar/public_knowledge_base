#include<iostream>
#include<iomanip>

/*
Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:
S = 1 + 1/2 + 1/3 + … + 1/100
*/
using namespace std;

int main()
{
	double s,x;
	int i;
	s=0;
	x=1.0;
	
	for(i=1;i<=100;i++)
	{
		s+=(1/x);
		x++;
	}
	cout<<fixed<<setprecision(2);
	cout<<s<<endl;
	
	
}