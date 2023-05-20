#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	float x,y;
	
	cin>>x;
	cin>>y;
	
	cout<<fixed<<setprecision(1);
	
	if(x==0 and y==0){cout<<"Origem"<<endl;}
		else{
			if(x!=0 and y==0){cout<<"Eixo X"<<endl;}
				else{
					if(y!=0 and x==0){cout<<"Eixo Y"<<endl;}
						else{
							if(x>0 and y>0){cout<<"Q1"<<endl;}
								else{
									if(x>0 and y<0){cout<<"Q4"<<endl;}
										else{
											if(y>0 and x<0){cout<<"Q2"<<endl;}
												else{
													if(y<0 and x<0){cout<<"Q3"<<endl;}
												}
										}
								}
						}
				}
		}
}