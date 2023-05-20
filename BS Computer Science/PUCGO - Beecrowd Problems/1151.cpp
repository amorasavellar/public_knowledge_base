#include<iostream>

using namespace std;

int main(){
	int i,f1,f2,n,z;
	cin>>n;
	f1=0;f2=1;
	
	//Fn = Fn - 1 + Fn - 2
	
	cout<<f1<<" "<<f2; //Imprimindo 0 e 1, valores iniciais
	
	//i=2: Por que os 2 primeiros valores foram determinados.
	for(i=2;i<n;i++)
	{
		z=f2;//z=1 //2 // 3// 5...
		f2=z+f1;//f2=0+1=1 //f2=1+1=2 //f2=1+2=3 //f2=1+4=5...
		f1=z;//f1=1
		
		cout<<" "<<f2; //Imprimindo espaços		
	}
	cout<<endl;
}