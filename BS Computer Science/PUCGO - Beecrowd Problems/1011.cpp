#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main(){
	
	double R, pi, VOLUME;
	cin >> fixed >> setprecision(2) >> R;
	pi= 3.14159;
	VOLUME = (4.0/3)*pi*pow(R,3);
	cout << fixed << setprecision (3);
	cout << "VOLUME = " << VOLUME << endl;
	 
}