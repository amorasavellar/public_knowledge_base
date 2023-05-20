#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int a,b,c,d,e,x;

	cin>>x;
	cin>>a>>b>>c>>d>>e;
	if(a==x){
		a=1;
	}
	else{
		a=0;
	}
	if(b==x){
		b=1;
	}
	else{
		b=0;
	}
	if(c==x){
		c=1;
	}
	else{
		c=0;
	}
	if(d==x){
		d=1;
	}
	else{
		d=0;
	}
	if(e==x){
		e=1;
	}
	else{
		e=0;
	}
	cout<<a+b+c+d+e<<endl;
}