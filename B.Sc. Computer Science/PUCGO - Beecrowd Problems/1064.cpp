#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	float x,y,z,i,m;
	y=0; // Quantidade
	z=0; //media

	for(i=0;i<6;i=i+1)
	{
		cin>>x;
		if(x>0)
		{
			y=y+1;
			z=x+z;
			
		}
	}
	m=z/y;
	
	cout<<y<<" valores positivos"<<endl;
	cout<<fixed<<setprecision(1);
	cout<<m<<endl;
}