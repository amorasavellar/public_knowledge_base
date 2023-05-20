#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string x,y,z,a,p,h,v,p1,l,s,m;
	
	cin>>x;
	cin>>y;
	cin>>z;
	
	//vertebrados
	if(x=="vertebrado" and y=="ave" and z=="carnivoro")
	{cout<<"aguia"<<endl;}
		else{
			if(x=="vertebrado" and y=="ave" and z=="onivoro")
			{cout<<"pomba"<<endl;}
				else{
					if(x=="vertebrado" and y=="mamifero" and z=="onivoro")
					{cout<<"homem"<<endl;}
						else{
							if(x=="vertebrado" and y=="mamifero" and z=="herbivoro")
							{cout<<"vaca"<<endl;}
						}
				}
		}

	//invertebrados
	
		if(x=="invertebrado" and y=="inseto" and z=="hematofago")
		{cout<<"pulga"<<endl;}
		else{
			if(x=="invertebrado" and y=="inseto" and z=="herbivoro")
			{cout<<"lagarta"<<endl;}
				else{
					if(x=="invertebrado" and y=="anelideo" and z=="hematofago")
					{cout<<"sanguessuga"<<endl;}
						else{
							if(x=="invertebrado" and y=="anelideo" and z=="onivoro")
							{cout<<"minhoca"<<endl;}
						}
				}
		}

}