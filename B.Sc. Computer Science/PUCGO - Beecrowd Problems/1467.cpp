#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    while(cin>>a>>b>>c)
    {

        if(a==b && a==c)
        {
            cout<<"*"<<endl;
        }
        else
        {
            if(c==b)
            {
                cout<<"A"<<endl;
            }
            else
            {
                if(c==a)
                {
                    cout<<"B"<<endl;
                }
                else
                {
                    if(a==b)
                    {
                        cout<<"C"<<endl;
                    }
                }
            }
        }
     }
    return 0;
}
