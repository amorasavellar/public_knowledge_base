#include<iostream>
#include<iomanip>

using namespace std;

int main() {

	double A, B, MEDIA;
	cin >> fixed >> setprecision(1) >> A;
	cin >> fixed >> setprecision(1) >> B;	
	MEDIA = ((A*3.5)+(B*7.5))/11;
	cout << fixed << setprecision(5);
	cout << "MEDIA = " << MEDIA << endl;
	
}
