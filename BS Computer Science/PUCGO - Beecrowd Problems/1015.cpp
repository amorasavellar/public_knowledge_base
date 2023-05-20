#include<iostream>
#include<cmath>


using namespace std;

int main(){
	
	float X1, Y1, X2, Y2, DISTANCIA;
	cin >> X1 >> X2 ;
	cin >> Y1 >> Y2;
	cout << fixed; 
	cout.precision(4);
	DISTANCIA = sqrt(pow(X1-Y1,2)+pow(X2-Y2,2));
	
	cout << DISTANCIA << endl;
	
}