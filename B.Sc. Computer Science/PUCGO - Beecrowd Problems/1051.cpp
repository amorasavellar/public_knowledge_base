#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	float x,y;
	cin>>x;
	
	if(x>= 2000.01 and x<=3000) // Salario entre 2mil e 3mil
	{y= (x-2000)*0.08;}
	else{
		if(x>= 3000.01 and x<=4500) //Salario entre 3mil e 4.5 mil
		{y= (x-3000)*0.18+1000*0.08;}
		else{
			if(x>= 4500.01)
			{y=(x-4500)*0.28 +1500*0.18+1000*0.08;} // Salario acima de 4.5 mil
		}
	}
	
	cout<<fixed<<setprecision(2);
	if(x<= 2000)
	{cout<<"Isento"<<endl;}
	else{
		cout<<"R$ "<<y<<endl;	
	}

}