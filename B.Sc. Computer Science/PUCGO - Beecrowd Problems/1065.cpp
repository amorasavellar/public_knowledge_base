#include <iostream>

using namespace std;

int main()
{
    int n,i,par=0;

    for(i=0;i<5;i++)
    {
        cin>>n;
        if(n%2==0) par++;
    }
    cout<<par<<" valores pares"<<endl;
}

