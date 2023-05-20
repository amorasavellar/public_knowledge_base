#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
	
	int A, B, C, MAIORAB, MAIORABC;
	cin >> A; cin >> B; cin >> C;
		
	MAIORAB = (A+B+abs(A-B))/2;
	MAIORABC = (MAIORAB+C+abs(MAIORAB-C))/2;
	
	cout << MAIORABC << " " << "eh o maior" << endl;	
	
}