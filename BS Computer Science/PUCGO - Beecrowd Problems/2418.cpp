#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    double n,menor=10.,maior=0.0,media,soma=0.0;

    for(i=1;i<=5;i++)
    {
        cin>>n;

        if(n>maior)
        {//Se Nota> Maior
            maior=n;
        }
        if(n<menor)
        {// Se Nota<Menor
            menor=n;
        }
        soma=soma+n;
    }
    media=soma - (menor+maior);

    cout<<fixed<<setprecision(1);
    cout<<media<<endl;


}
