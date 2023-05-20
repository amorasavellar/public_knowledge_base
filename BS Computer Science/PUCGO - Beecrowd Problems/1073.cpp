#include<iostream>

using namespace std;

int main(){
	
	int i,n;
	cin>>n;
		
	//i=2: Por que o menor número par é 2.
	//i<=n: Por que enquanto i for menor ou igual a n o loop roda.
	//i=i+2: Por que a cada rodada do loop é acrescentado 2 a i.
	for(i=2;i<=n;i=i+2)
	{
		cout<<i<<"^2 = "<<i*i<<endl;
	}
	
}