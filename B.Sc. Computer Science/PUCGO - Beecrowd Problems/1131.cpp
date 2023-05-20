#include <iostream>

using namespace std;

int main()
{
    int I,G,x=0,i=0,g=0,e=0,c=0;

    while (x!=2)
    {
        cin>>I>>G;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>x;

        if(I==G)
        {
            e++;
        }
        else
        {
            if(I>G)
            {
                i++;
            }
            else
            {
                g++;
            }
        }
        c++;
    }

    cout<<c<<" grenais"<<endl;
    cout<<"Inter:"<<i<<endl;
    cout<<"Gremio:"<<g<<endl;
    cout<<"Empates:"<<e<<endl;

    if(i==g)
    {
        cout<<"Nao houve vencedor"<<endl;
    }
    else
    {
        if(i>g)
        {
            cout<<"Inter venceu mais"<<endl;
        }
        else
        {
            cout<<"Gremio venceu mais"<<endl;
        }
    }
}

/*

  1-Ler numero de gols de Inter e Gremio no Grenal.
  2-Logo apos escrever "Novo grenal(1-não 2-não)".
  2.1 - Se resposta for 1 ler numero de gols no Grenal novamente.
  2.2 - Se não, imprimir estatisticas.
        - Quantos GRENAIS fizeram parte da estatística.
        - O número de vitórias do Inter.
        - O número de vitórias do Grêmio.
        - O número de Empates.
        - Imprmir quem venceu o maior número de GRENAIS.

 */
