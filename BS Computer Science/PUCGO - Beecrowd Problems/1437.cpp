#include <iostream>

using namespace std;

int main()
{
    int i,t,x=0;
    char n;

    cin>>t;

    while (t!=0)
    {
        x=0; //x=Norte
        for(i=0;i<t;i++)
        {
            cin>>n;

            if(n=='D')//Vire a Direita
            {x++;}
            if(n=='E')//Vire a Esquerda
            {x--;}
            if(x>3 or x<-3)//Quando se passa pelo Norte
            {x=0;}

        }

        if(x==-1 or x==3)
        {//Oeste
            cout<<"O"<<endl;
        }
        if(x==2 or x==-2)
        {//Sul
            cout<<"S"<<endl;
        }
        if(x==1 or x==-3)
        {//Leste
            cout<<"L"<<endl;
        }
        if(x==0)
        {//Norte
            cout<<"N"<<endl;
        }

       cin>>t;

    }
}

// "D"
// N=0
// L=1
// S=2
// O=3

// "E"
// N=0
// L=-1
// S=-2
// O=-3
