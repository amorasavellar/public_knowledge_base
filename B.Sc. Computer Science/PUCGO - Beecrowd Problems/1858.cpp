#include <iostream>

using namespace std;

int main()
{
    int i, pessoas,socos,posicao,conta=0,menor=20;

    cin>>pessoas;
        for(i=1;i<=pessoas;i++)
        {
            cin>>socos;
            conta++;
            if(socos<menor)
            {
               menor=socos;
               posicao=conta;
            }

        }
        cout<<posicao<<endl;



}
