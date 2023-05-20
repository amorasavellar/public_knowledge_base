#include<iostream>

using namespace std;

int main(){
	
	int h,dv,fh,x;
	cin>>h; cin>>dv; cin>>fh;
	x= h+dv+fh; // Somando todas as h,dv e fh.
	
	if(x>=24) //Se x for maior ou igual a 24.
	{x-=24;} //22 6 -2//x=26//x= 26-24//x=2
	
	if(x<0) // se x for menor que zero.
	{x+=24;}//0 3 -4//x= -1//x= 24+(-1)//x=23
	
	cout<<x<<endl;
	
}