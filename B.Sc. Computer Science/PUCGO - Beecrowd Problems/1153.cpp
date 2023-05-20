#include<iostream>

using namespace std;

int main()
{
	int x,f,i,n;
	cin>>x;
	f=1;
	
	for(i=x;i>=1;i=i-1)
	{
		f=f*i;		
	}
	cout<<f<<endl;
}