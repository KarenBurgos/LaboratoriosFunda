#include <iostream>

using namespace std;

int main ()
{
    int n;

    cout << endl << "CALCULO DE NUMERO PAR O IMPAR" << endl << endl;
    
    cout <<"ingrese el valor a evaluar: ";
    cin >>n;

    if (n%2 == 0)
    {
        cout << endl << n << " es un numero par";
    }
    else 
    {
        cout << endl << n << " es un numero impar" << endl;
    }

    return 0; 

}