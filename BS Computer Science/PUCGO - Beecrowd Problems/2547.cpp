#include <iostream>

using namespace std;

int main()
{
    int i,visitantes,hmax,hmin,x,y;

    while(cin>>visitantes>>hmin>>hmax)
    {
        y=0;
        for(i=0;i<visitantes;i++)
        {
            cin>>x;

            if(x>=hmin and x<=hmax)
            {
                y++;
            }
        }
        cout<<y<<endl;
    }
    return 0;
}
