#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int a,b,c,x1,x2,x3,x,y; //Declarando variaveis.
	
	cin>>x1; cin>>x2; cin>>x3; //Lendo variaveis.
	
	if(x1>x2 and x1>x3){a=x1,b=x2,c=x3;} //5>7 and 5>2 False
	else{
        if(x2>x3 and x2>x1){a=x2,b=x1,c=x3;} //7>2 and 7>5 True
	    else{a=x3,b=x2,c=x1;} //2,7,5
	}	
	
	x=pow(a,2);
	y=(pow(b,2)+pow(c,2));
	
	if((b+c)<=a or (b+a)<=c or (a+c)<=b)
	{cout<<"Invalido"<<endl;}
	else{
		if((a==b and b==c) and x==y)
		{cout<<"Valido-Equilatero"<<endl;
		 cout<<"Retangulo: S"<<endl;
		}
		else{
			if((a==b and b==c) and x!=y)
			{cout<<"Valido-Equilatero"<<endl;
			 cout<<"Retangulo: N"<<endl;
			}
			else{
				if((a!=b and b!=c and c!=a) and x==y)
				{cout<<"Valido-Escaleno"<<endl;
				 cout<<"Retangulo: S"<<endl;
				}
				else{
					if((a!=b and b!=c and c!=a) and x!=y) // x=(3*3), y=(4*4)+(5*5) // x=9, y=49
					{cout<<"Valido-Escaleno"<<endl;
					 cout<<"Retangulo: N"<<endl;
					}
					else{
						if((a==b or b==c or a==c) and x==y)
						{cout<<"Valido-Isoceles"<<endl;
						 cout<<"Retangulo: S"<<endl;
						}
						else{
							if((a==b or b==c or a==c) and x!=y)
							{cout<<"Valido-Isoceles"<<endl;
							 cout<<"Retangulo: N"<<endl;
							}
						}
					}
				}
			}
	
		}
	}
}
