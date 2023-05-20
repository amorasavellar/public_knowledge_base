#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int C1, C2, Q1, Q2;
	double V1, V2, VALOR;
	cin >> C1; cin >> Q1; cin >> fixed >> setprecision(2) >> V1;
	cin >> C2; cin >> Q2; cin >> fixed >> setprecision(2) >> V2;
	VALOR = V1*Q1 + V2*Q2;
	cout << fixed << setprecision(2);
	cout << "VALOR A PAGAR: R$ " << VALOR << endl;
}