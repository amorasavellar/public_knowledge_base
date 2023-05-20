#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
	
	double SL, TV, TOTAL;
	string N;
	cin >> N;
	cin >> fixed >> setprecision (2) >> SL;
	cin >> fixed >> setprecision (2) >> TV;
	TOTAL = ((TV*15)/100)+SL;
	cout << fixed << setprecision (2);
	cout << "TOTAL = R$ " << TOTAL << endl;
	
}