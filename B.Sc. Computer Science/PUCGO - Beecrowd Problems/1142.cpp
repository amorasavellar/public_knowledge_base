#include <iostream>

using namespace std;

int main()
{
    int n,i,x=1,y=3;

    cin>>n; //7 linhas
    n=n*3; //7 linhas * 3 colunas = 21 elementos

    for(i=1;i<=n;i++) //R1: i=1;1<21;i++ //R2: i=2;2<21;i++ //R3: i=3;3<21;i++ //R4: i=4;4<21;i++ //R5:...
    {
        if(x==y)
        {
            cout<<x<<" PUM"<<endl;
            y=y+4; //R1: y=3 //R2: y=3 //R3: y=3 //R4: y=7 //R5:...
            x=x+1;//R1: x=1 //R2: x=2 //R3: x=3 //R4: x=5 //R5:...
        }
        else
        {
            cout<<x<<" ";
        }
        x++;

    }
}

/*
Escreva um programa que leia um valor inteiro N.
Este N é a quantidade de linhas de saída que serão
apresentadas na execução do programa.
*/
