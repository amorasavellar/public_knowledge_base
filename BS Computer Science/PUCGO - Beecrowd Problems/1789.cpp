#include <iostream>

using namespace std;

int main()
{
    int teste,velocidade,i,maior,nivel;

    while (cin>>teste)
    {
        maior=0;
        for(i=0;i<teste;i++)
        {
            cin>>velocidade; //Lendo velocidade da lesma

            if(velocidade>maior)
            {
                maior=velocidade;
            }



        }

        if(maior<10) nivel=1;
        if(maior>=10 and maior<20) nivel=2;
        if(maior>=20) nivel=3;

        cout<<nivel<<endl;
    }
    return 0;
}
