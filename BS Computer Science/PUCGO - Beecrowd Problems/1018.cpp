#include<iostream>
using namespace std;

int main(){
	
	int x,y100,y50,y20,y10,y5,y2,y1;
	cin>>x;
	y100 = x/100;
	y50 = (x%100)/50;
	y20 = ((x%100)%50)/20;
	y10 = (((x%100)%50)%20)/10;
	y5 = ((((x%100)%50)%20)%10)/5;
	y2 = (((((x%100)%50)%20)%10)%5)/2;
	y1 = ((((((x%100)%50)%20)%10)%5)%2)/1;
	
	cout<<x<<endl;
	cout<<y100<<" nota(s) de R$ 100,00"<<endl;
	cout<<y50<<" nota(s) de R$ 50,00"<<endl;
	cout<<y20<<" nota(s) de R$ 20,00"<<endl;
	cout<<y10<<" nota(s) de R$ 10,00"<<endl;
	cout<<y5<<" nota(s) de R$ 5,00"<<endl;
	cout<<y2<<" nota(s) de R$ 2,00"<<endl;
	cout<<y1<<" nota(s) de R$ 1,00"<<endl;
}