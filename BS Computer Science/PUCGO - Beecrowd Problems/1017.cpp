#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int velocidade, tempo;
	double litro, distancia;
	cin >> tempo >> velocidade;
	distancia = tempo*velocidade;
	cout << fixed << setprecision(3);
	litro = distancia/12;
	cout << litro << endl;

}