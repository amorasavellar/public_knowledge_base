#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t,i,j1,j2;
    string n1,n2,p1,p2;


    cin>>t; //Lendo casos de teste

    for(i=0;i<t;i++)
    {
        cin>>n1>>p1>>n2>>p2; // Lendo nome e escolha dos jogadores
        cin>>j1>>j2;

        if((j1+j2)%2==0) //Caso soma seja par
        {
            if(p1=="PAR")
            {
                cout<<n1<<endl;
            }
            else
            {
                cout<<n2<<endl;
            }
        }
        else //Caso a soma seja impar
        {
            if(p1=="IMPAR")
            {
                cout<<n1<<endl;
            }
            else
            {
                cout<<n2<<endl;
            }
        }

    }

}
