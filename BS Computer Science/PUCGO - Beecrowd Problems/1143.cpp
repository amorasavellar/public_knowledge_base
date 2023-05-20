#include<iostream>
#include<math.h>

using namespace std;

int main(){

	int n,i;
	cin>>n;
	
	// i=1: i deve começar valendo 1, pois é o menor numero que pode ser multiplicado sem dar 0.
	// i<=n: O loop dura enquanto i for menor ou igual a n.
	// i=i+1: A cada rodada do loop i recebe 1 a mais.
	for(i=1;i<=n;i=i+1)
	{
		cout<<pow(i,1)<<" "<<pow(i,2)<<" "<<pow(i,3)<<endl; // elevando i por 1,2 e 3
	}
}