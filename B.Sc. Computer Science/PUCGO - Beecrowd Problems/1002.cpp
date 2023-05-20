#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
	double area, raio, n;
	cin>>raio;
	n = 3.14159;
	area = n*pow(raio,2);
	cout<<fixed<<setprecision(4);
	cout<<"A="<<area<<endl;
}