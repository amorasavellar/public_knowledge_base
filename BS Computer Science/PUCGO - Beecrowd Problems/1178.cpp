#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    double x, vetor[100];

    cin>>x;
    
    for(i=0;i<100;i++)
    {
        vetor[i]=x;
        cout<<fixed<<setprecision(4);
        cout<<"N["<<i<<"] = "<<vetor[i]<<endl;
        x=x/2.;
    }



}
