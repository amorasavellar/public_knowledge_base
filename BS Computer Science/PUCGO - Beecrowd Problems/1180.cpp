#include <iostream>

using namespace std;

int main()
{
    int n,v,i,menor=100000,posicao;
    cin>>n;
    int vetor[n];

    for(i=0;i<(n-1);i++)
    {
        cin>>v; //Lendo Valor
        vetor[i]=v;

        if(v<menor)
        {
            menor=v; //Achando o menor valor do vetor.
            posicao=i;//Achando posicão do menor valor
        }
    }
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<posicao<<endl;

}
