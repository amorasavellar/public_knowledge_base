#include<iostream>
#include<iomanip>

using namespace std;

int main (){
	
	
	double x;
	cin>>fixed>>setprecision(5);
	cin>>x;
	
	if(0<=x and 100>=x){
		
		if(x>=0 and x<=25){cout<<"Intervalo [0,25]"<<endl;}
			else{
				if(x>=25 and x<=50){cout<<"Intervalo (25,50]"<<endl;}
					else{
						if(x>=50 and x<=75){cout<<"Intervalo (50,75]"<<endl;}
							else{
								if(x>=75 and x<=100){cout<<"Intervalo (75,100]"<<endl;}
								}
							}	
					}
			}
	else{cout<<"Fora de intervalo"<<endl;}

}