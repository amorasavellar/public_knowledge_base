#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	float x; 
	cin>>x; //400.00
	
	
	cout<<fixed<<setprecision(2);
	if(x>=0 and x<=400.00)
	{cout<<"Novo salario: "<<((x*15)/100)+x<<endl;
	 cout<<"Reajuste ganho: "<<(((x*15)/100)+x)-x<<endl;
	 cout<<"Em percentual: 15 %"<<endl;
	}
		else{
			if(x>=400.01 and x<=800.00)
			{cout<<"Novo salario: "<<((x*12)/100)+x<<endl;
	 		 cout<<"Reajuste ganho: "<<(((x*12)/100)+x)-x<<endl;
	 		 cout<<"Em percentual: 12 %"<<endl;			
			}
				else{
					if(x>=800.01 and x<=1200.00)
					{cout<<"Novo salario: "<<((x*10)/100)+x<<endl;
	 		 		 cout<<"Reajuste ganho: "<<(((x*10)/100)+x)-x<<endl;
	 				 cout<<"Em percentual: 10 %"<<endl;	
					}
						else{
							if(x>=1200.01 and x<=2000.00)
							{cout<<"Novo salario: "<<((x*7)/100)+x<<endl;
	 		 		 		 cout<<"Reajuste ganho: "<<(((x*7)/100)+x)-x<<endl;
	 				 		 cout<<"Em percentual: 7 %"<<endl;	
							}
								else{
									if(x>2000.00)
									{cout<<"Novo salario: "<<((x*4)/100)+x<<endl;
	 		 		 		 		 cout<<"Reajuste ganho: "<<(((x*4)/100)+x)-x<<endl;
	 				 		 		 cout<<"Em percentual: 4 %"<<endl;
									}
								}
						}
		}
	}
}