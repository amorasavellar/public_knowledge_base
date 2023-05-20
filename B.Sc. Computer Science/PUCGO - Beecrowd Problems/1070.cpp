#include <iostream>

using namespace std;

int main()
{
    int x,y=0;

    cin>> x;

    while (y<6)
    {
        x++;

        if(x%2!=0)
        {
            cout<<x<<endl;
            y++;
        }

    }
}
