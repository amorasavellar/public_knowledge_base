#include <iostream>

using namespace std;

int main()
{
    int x=0,t,i=0,a,b;
    double ta,tb;

    cin>>t; //Quantidade de Testes

    while(i<t) //Enquanto t for maior que i
    {
        cin>>a>>b>>ta>>tb; //Entradas
        x=0;
            while(a<=b) //Enquanto cidade a for menor ou igual cidade b.
            {
                a= a + (ta/100)* a;//Calculando quantidade de pessoas adcionadas por ano.
                b= b + (tb/100)* b;//Calculando quantidade de pessoas adcionadas por ano.

                x++; //Anos

                if(x>100) //Se anos for menor que 100.
                {
                    cout<<"Mais de 1 seculo."<<endl;
                    break;
                }
            }

            if(x<=100) // Se x for menor que 100
            {
                cout<<x<<" anos."<<endl;
            }
        i++;
    }
}
