#include<iostream>

using namespace std;

int main(){
	int n,x,i,in,out;
	cin>>n; //Quantidade de valores a ser lido
	in=0;
	out=0;
	
	for(i=0;i<n;i=i+1)
	{
		cin>>x;
		if(x>=10 and x<=20)
		{
			in= in+1;
		}
		else
		{
			out= out+1;
		}
	}
	
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
}