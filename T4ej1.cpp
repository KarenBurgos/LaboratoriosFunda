#include <iostream>

using namespace std;

int ArregloImpares(int,int);

int main ()
{
    int i,n,arreglo[100];

    cout << endl << endl;
    cout << "CALCULO DE LOS 100 PRIMEROS NUMEROS ENTEROS IMPARES";
    cout << endl << endl;

    ArregloImpares( i, n);
}


int ArregloImpares(int i,int n)
{
    int impares[100];

     for(i=0; i<100;i++)
    {
        n=(2*i)+1;
        impares[i]={n};
    }

    for(i=99; i>=0;i--)
    {
        if (impares[i]==1)//al llegar a 1 poner "," ya que no hay mas numeros que le sigan//
        {
            cout<< impares[i];
        }
        else //separar cada numero con ","//
        {
            cout<< impares[i]<< ", ";

        }
    }
    
}