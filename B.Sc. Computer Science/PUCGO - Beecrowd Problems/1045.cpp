#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	double x1,x2,x3,a,b,c;
	cin>>x1;cin>>x2;cin>>x3; //5,7,2
	
	//Colocando valores em ordem decrecente.(A maior dos 3 lados.)
	if(x1>x2 and x1>x3){a=x1,b=x2,c=x3;} //5>7 and 5>2 False
	   else{
	       if(x2>x3 and x2>x1){a=x2,b=x1,c=x3;} //7>2 and 7>5 // True // 7,5,2
		      else{a=x3,b=x2,c=x1;} 
		}
	
	// Determinando tipo do triangulo.
	if(a>=(b+c)){cout<<"NAO FORMA TRIANGULO"<<endl;} //7>=(5,2) // True
	   	else{
			if(pow(a,2)==(pow(b,2)+pow(c,2))){cout<<"TRIANGULO RETANGULO"<<endl;}
					if(pow(a,2)>(pow(b,2)+pow(c,2))){cout<<"TRIANGULO OBTUSANGULO"<<endl;}
							if(pow(a,2)<(pow(b,2)+pow(c,2))){cout<<"TRIANGULO ACUTANGULO"<<endl;}
		}
									if(a==b and b==c){cout<<"TRIANGULO EQUILATERO"<<endl;}		
										else{
											if(a==b or b==c or a==c){cout<<"TRIANGULO ISOSCELES"<<endl;}
										}
}