#include<iostream>

using namespace std;

int main(){
	int i,j;
	
	//i=1: i começa valendo 1.
	//i<10: o loop só para quando i for menor que 10, ou seja 9.
	//i=i+2: a cada rodada é somado 2 a i.
	for(i=1;i<10;i=i+2)
	{
		//j=i+6: j recebe o numero da rodada mais 6.
		//j>=i+4: o loop só para quando j for menor que i+4;
		//j=j-1: a cada rodada j é subtraido por 1.
		for(j=i+6;j>=i+4;j=j-1)
		{
			cout<<"I="<<i<<" "<<"J="<<j<<endl;	
		}
	}
	
}

//I=1 J=7 // (7-1)+1=7 // 6+1=7 // i+(j-1)=7
//I=1 J=6 // (6-1)+1=6 // 5+1=6 // i+(j-1)=6
//I=1 J=5 // (5-1)+1=5 // 4+1=5 // i+(j-1)=5