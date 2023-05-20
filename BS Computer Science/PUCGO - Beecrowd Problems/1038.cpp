#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	int c,q;
	double total;
	cin>>c; cin>>q;
	if(c==1){cout<<fixed<<setprecision(2)<<"Total: R$ "<<q*4.00<<endl;}
		else{
			if(c==2){cout<<fixed<<setprecision(2)<<"Total: R$ "<<q*4.50<<endl;}
			else{
				if(c==3){cout<<fixed<<setprecision(2)<<"Total: R$ "<<q*5.00<<endl;}
				else{
					if(c==4){cout<<fixed<<setprecision(2)<<"Total: R$ "<<q*2.00<<endl;}
					else{
						cout<<fixed<<setprecision(2)<<"Total: R$ "<<q*1.50<<endl;}
				}
			}
		}
}