#include<iostream>

using namespace std;

int main(){
	int i,j;
	j=60;
	
	//i=1: Por que a sequencia começa pelo numero 1.
	//i<38: Por que é o limite de i em relação a j. Sendo que i avança de 3 em 3.
	//i=i+3, j=j-5: Avançando i de 3 em 3, e subtraindo de 5 em 5 de j.
	for(i=1;i<38;i=i+3,j=j-5)
	{
		cout<<"I="<<i<<" "<<"J="<<j<<endl;
	}
	
}