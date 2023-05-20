#include<iostream>

using namespace std;

int main(){
	int n,i;
	cin>>n;
	
	//i=1: Por que é o menor número que pode ser dividido sem o resto dar 0
	for(i=1;i<10000;i=i+1)
	{
		if((i%n)== 2)
		{
			cout<<i<<endl;
		}
	}
}