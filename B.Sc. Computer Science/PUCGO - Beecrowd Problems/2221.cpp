#include <iostream>
//dan dan
using namespace std;

int main()
{
     short df1,df2,nv1,nv2,bn,atk1,atk2;
     int n, gop2, gop1;
     
     cin >> n;

     while(n--)
     {
          cin >> bn;
          cin >>atk1>>df1>>nv1; //Lendo entradas
          cin >>atk2>>df2>>nv2;
          
          gop1 = (atk1+df1)/2; //Calculando golpes
          gop2 = (atk2+df2)/2;

          if(nv1%2==0)gop1+=bn;
          if(nv2%2==0)gop2+=bn;

          if(gop1>gop2)
          cout << "Dabriel" << endl;
          else
          {
            if(gop1<gop2)
            {
            cout << "Guarte" << endl;
            }
            else
            {
                cout << "Empate" << endl;
            }
          }
     }
     return 0;
}