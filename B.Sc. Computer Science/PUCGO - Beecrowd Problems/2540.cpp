#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i,players,votos,sim;


    while (cin>>players)
    {

        sim=0;
        for(i=0;i<players;i++)
        {
            cin>>votos;
            if(votos==1) sim++;
        }

        float x= ceil(players *.666);
        if(sim>=x)
        {
            cout<<"impeachment"<<endl;
        }
        else
        {
            cout<<"acusacao arquivada"<<endl;
        }
    }
    return 0;
}
