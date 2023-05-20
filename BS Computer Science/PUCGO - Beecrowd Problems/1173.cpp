#include <iostream>

using namespace std;

int main()
{
    int vetor[10], i, x;

    cin>>x;

    for(i=0;i<=9;i++)
    {
        vetor[i]=x;
        cout<<"N["<<i<<"] = "<<x<<endl;
        x=x*2;
    }

}
