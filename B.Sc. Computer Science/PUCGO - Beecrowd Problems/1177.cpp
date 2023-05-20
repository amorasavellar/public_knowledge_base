#include <iostream>
#define N 1000
using namespace std;


int main()
{
    int t,i,v=0;
    cin>>t; //Lendo t

    int vetor[N];

    for(i=0;i<N;i++)
    {
        vetor[i]=i%t;
        cout<<"N["<<i<<"] = "<<vetor[i]<<endl;
    }

}
