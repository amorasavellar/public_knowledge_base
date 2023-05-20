#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	int sum,id;
	double i, m;
	
	sum=0;
	cin>>id;
	
	while(id>=0)
	{
		i++;
		sum=sum+id;
		cin>>id;
	}
	m=sum/i;
	cout<<fixed<<setprecision(2);
	cout<<m<<endl;
}