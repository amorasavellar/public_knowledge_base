#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int n,i;
	float x,y;
	cin>>n;
	
	for(i=0;i<n;i=i+1)
	{
		cin>>x>>y;
		if(y==0)
		{ // Se y for igual zero
			cout<<"divisao impossivel"<<endl;
		}
		else
		{
			cout<<fixed<<setprecision(1);
			cout<<x/y<<endl;
		}
	}
}