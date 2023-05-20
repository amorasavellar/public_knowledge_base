#include<iostream>

using namespace std;

int main(){
	
	int a,b,t;
	cin>>a;cin>>b;// Ex: a=16, b=2
	t=(24-a)+b; //(24-16)+b // 8+2 // 10
	if(a>b){cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;}
		else{
			if(a==b){cout<<"O JOGO DUROU "<<24<<" HORA(S)"<<endl;}
				else{cout<<"O JOGO DUROU "<<b-a<<" HORA(S)"<<endl;}
		}
}
