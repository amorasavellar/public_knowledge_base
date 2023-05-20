#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	int X;
	float Y,R;
	cin >> X;
	cin >> fixed >> setprecision(1) >> Y;
	R = X/Y;
	cout << fixed << setprecision(3);
	cout << R  << " " << "km/l" << endl;
}