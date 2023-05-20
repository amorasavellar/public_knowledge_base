#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	float a,b,c,t,p; //Declarando variaveis.
	
	cin>>a;cin>>b;cin>>c; //a=6.0 b=4.0 c=2.0
	
	cout<<fixed<<setprecision(1);
	
	if(a<b+c and b<a+c and c<a+b)// 6<6 ou 4<8 ou 2<8
	{p=a+b+c; 
	cout<<"Perimetro = "<<p<<endl;}
		else
		{t=((a+b)*c)/2;
		cout<< "Area = "<<t<<endl;
		}
}
