#include <iostream>

using namespace std;

int ArregloImpares(int, int *);

int main ()
{
    int r, repeticiones;
    
    cout << endl << endl;
    cout << "CALCULO DE REPETICIONES EN UN ARREGLO";
    cout << endl << endl;


   ArregloImpares(r,&repeticiones);

    if(repeticiones==0)
    {
        cout <<"Este numero no pertenece al arreglo";
        cout << endl << endl;
    }   
        else if(repeticiones>1)
            {
                cout << "el numero se repite "<< repeticiones << " veces";
                cout << endl << endl;
            }
            else
            {
                cout << "este numero no se repite en el arreglo, a parece una sola vez";
                cout << endl << endl;
            }
    return 0;
}


int ArregloImpares(int r, int *repeticiones)
{
    int n;

    cout << "cantidad del arreglo: ";
    cin >> n;

    int i,arreglo[n], nrepetido;

    for (i=0;i<n;i++)
    {
        cout << "Introduzca su numero perteneciente al arreglo: ";
        cin >> arreglo[i];
    }

        cout << endl;
        cout <<"introduzca el numero a corroborar que se repite: ";
        cin >> nrepetido;
        cout << endl;

    r = 0;

    for (i=0; i<n; i++)
    {
        if(arreglo[i]==nrepetido)
           r++;
    }

    *repeticiones=r;
}