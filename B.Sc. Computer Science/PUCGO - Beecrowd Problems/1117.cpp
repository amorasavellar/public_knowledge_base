#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n,m=0;
    int x=0;

    while (x<2)
    {
        cin>>n;

        if(n>=0 and n<=10)
        {//Se N estiver no intervalo [0,10]
           m=n+m;
           x=1+x;
        }
        else
        {//Se N estiver fora do invervalo
           cout<<"nota invalida"<<endl;
        }


    }
    cout<<fixed<<setprecision(2);
    cout<<"media = "<<m/2.<<endl;
}

/*
 1-Ler Nota.
 2-Descobrir quais notas estão no intervalo de [0,10].
 3-Calcular e imprimir a media das que estão no intervalo.
 4-Imprimir "nota invalida" para notas fora do intervalo.

*/
