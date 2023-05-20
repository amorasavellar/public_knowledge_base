#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
	
	double A,B,C,TR,AC,AT,AQ,AR,pi;
	cin >> fixed >> setprecision(1);
	cin >> A; cin >> B; cin >> C;
	
	pi = 3.14159;
	TR = (A*C)/2;
	AC = pi*pow(C,2);
	AT = ((A+B)*C)/2;
	AQ = pow(B,2);
	AR = A*B;

	cout << fixed << setprecision (3);
	cout << "TRIANGULO: " << TR << endl;
	cout << "CIRCULO: " << AC << endl;
	cout << "TRAPEZIO: " << AT << endl;
	cout << "QUADRADO: " << AQ << endl;
	cout << "RETANGULO: " << AR << endl;
}