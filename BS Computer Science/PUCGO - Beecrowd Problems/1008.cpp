#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	int NUM, HT;
	double SH, SALARY;
	cin >> NUM;
	cin >> HT;
	cin >> fixed >> setprecision(2) >> SH;
	SALARY = SH * HT;
	cout << "NUMBER = " << NUM << endl;
	cout << fixed << setprecision(2);
	cout << "SALARY = U$ " << SALARY << endl;
	
}
