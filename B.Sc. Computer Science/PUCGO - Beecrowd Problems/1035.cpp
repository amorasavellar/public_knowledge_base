#include<iostream>

using namespace std;

int main(){
	
	int A,B,C,D;
	bool x;
	cin>>A; cin>>B; cin>>C; cin>>D;
	x= B>C and D>A and (C+D)>(A+B) and C>0 and D>0 and (A/2)>0;
	if(x == true)
	{
		cout<<"Valores aceitos"<<endl;
	}
	else{
			cout<<"Valores nao aceitos"<<endl;
		}
}