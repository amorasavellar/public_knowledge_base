#include<iostream>

using namespace std;

int main(){
	int n,x,i;
	cin>>n;
	
	for(i=0;i<n;i=i+1)
	{
		cin>>x;
		if(x%2!=0 and x<0)
		{
			cout<<"ODD NEGATIVE"<<endl;
		}
		else{
			if(x%2!=0 and x>0)
			{
				cout<<"ODD POSITIVE"<<endl;
			}
			else{
				if(x%2==0 and x<0)
				{
				cout<<"EVEN NEGATIVE"<<endl;
				}
				else{
					if(x%2==0 and x>0)
					{
					cout<<"EVEN POSITIVE"<<endl;
					}
					else
					{
					cout<<"NULL"<<endl;
					}
				}
			}
		}
	}
}