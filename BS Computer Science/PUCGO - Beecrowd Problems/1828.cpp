#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string sheldon,raj;
	int tentativas,x;
	cin>>tentativas;
	
	for(int t=1; t<=tentativas; ++t) // Loop para conferir possibilidades
	{
		cin>>sheldon; cin>>raj;

		if(sheldon==raj)
		{cout<<"Caso #"<<t<<":"<<" De novo!"<<endl;}
		else{ 
			if(sheldon== "tesoura" and raj=="papel")
			{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
			else{
				if(sheldon== "papel" and raj=="pedra")
				{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
				else{
					if(sheldon == "pedra" and raj=="lagarto")
					{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
						else{
						if(sheldon== "lagarto" and raj=="Spock")
						{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
						else{
							if(sheldon== "Spock" and raj=="tesoura")
							{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
							else{
								if(sheldon== "tesoura" and raj=="lagarto")
								{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
								else{
									if(sheldon== "lagarto" and raj=="papel")
									{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
									else{
										if(sheldon== "papel" and raj=="Spock")
										{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
										else{
											if(sheldon== "Spock" and raj=="pedra")
											{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
											else{
												if(sheldon== "pedra" and raj=="tesoura")
												{cout<<"Caso #"<<t<<":"<<" Bazinga!"<<endl;}
												else{cout<<"Caso #"<<t<<":"<<" Raj trapaceou!"<<endl;
												}
											}
										}
									}
								}
							}
  						}
					}
				}
			}
		}
	}
}