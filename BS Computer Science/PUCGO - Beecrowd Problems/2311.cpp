#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int i,t,j=0;
    float n,big,small,nota,gd;
    string name;

    cin>>t;

    while (j<t)
    {
        cin>>name;
        cin>>gd;
        big=0;small=10; nota=0;

            for(i=1;i<=7;i++)
            {
                cin>>n;

                if(n>=big) big=n; //achando a maior nota.
                if(n<small) small=n; //achando a menor nota.
                nota=nota+n; //Somando todas notas
            }

        nota= (nota-(big+small))*gd;
        j++;
        cout<<fixed<<setprecision(2);
        cout<<name<<" "<<nota<<endl;
    }
}
