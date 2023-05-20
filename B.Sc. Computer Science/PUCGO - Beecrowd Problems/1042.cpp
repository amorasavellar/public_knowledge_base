#include<iostream>

using namespace std;

int main(){
	
	int a,b,c;
	
	cin>>a; cin>>b; cin>>c;
	if(a>b and b>c){cout<<c<<endl;
		     		cout<<b<<endl;
		     		cout<<a<<endl;}
	else{
	    if(a>c and c>b){cout<<b<<endl;
			    		cout<<c<<endl;
			    		cout<<a<<endl;}
		else{
		    if(b>a and a>c){cout<<c<<endl;
			    	    	cout<<a<<endl;
			            	cout<<b<<endl;}
			else{
			    if(b>c and c>a){cout<<a<<endl;
			    	    	    cout<<c<<endl;
			                    cout<<b<<endl;}
				else{
				    if(c>a and a>b){cout<<b<<endl;
					 	    		cout<<a<<endl;
					 	    		cout<<c<<endl;}
					else{
					    if(c>b and c>a){cout<<a<<endl;
							    		cout<<b<<endl;
							    		cout<<c<<endl;}
					}
				}
			}
		}
	}
	cout<<""<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
}