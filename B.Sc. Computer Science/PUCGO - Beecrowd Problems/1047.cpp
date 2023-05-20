#include<iostream>

using namespace std;

int main(){
	
	int hi,mi,hf,mf,x,y;
	cin>>hi;cin>>mi;cin>>hf;cin>>mf; //Ex1: 7 8 9 10//Ex2: 7 7 7 7//Ex3: 7 10 8 9
	
	x=60*hi+mi; // Transformando horas e minutos iniciais tudo em minutos.
	y=60*hf+mf; // Transformando horas e minutos finais tudo em minutos.
			
	if(hi<hf and mi<mf or hi<hf and mi>mf)
	{ //Se hora inicial menor que final, minuto incial maior que final ou menor que final.
		cout<<"O JOGO DUROU "<<(y-x)/60<<" HORA(S) E "<<(y-x)%60<<" MINUTO(S)"<<endl;
	}
	else{
		if(hi>hf and mi>mf or hi>hf and mi<mf)
		{// Se hora inicial maior que final, minuto incial maior que final ou menor que final.
			cout<<"O JOGO DUROU "<<((1440-x)+y)/60<<" HORA(S) E "<<((1440-x)+y)%60<<" MINUTO(S)"<<endl;
		}
		else{
			if(hi==hf and mi>mf)
			{
				cout<<"O JOGO DUROU "<<0<<" HORA(S) E "<<x-y<<" MINUTO(S)"<<endl;	
			}
			else{
				if(hi==hf and mi<mf)
				{
					cout<<"O JOGO DUROU "<<0<<" HORA(S) E "<<y-x<<" MINUTO(S)"<<endl;	
				}			
				else{
					if(hi==hf and mi==mf)
					{// Se horas e minutos forem iguais.
						cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
					}
				}
			}
		}
	}
}