#include<iostream>

using namespace std;

int main(){
	int x,i,y,z;
	y=0;
	z=0;
	
	for(i=1;i<=100;i=i+1)
	{
		cin>>x;
		if(x>y)
		{
			y=x;
			z=i;
		}
	}
	cout<<y<<endl;
	cout<<z<<endl;
}