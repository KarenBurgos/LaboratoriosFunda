#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << endl << "NUMERO POSITIVO, NEGATIVO O CERO" << endl << endl;

    cout << "ingrese el valor a evaluar: ";
    cin >> n;

    if (n==0)
    {
        cout<< "el valor ingresado es cero"<< endl ;
    }
    else 
    {
        if(n>0)
        {
        cout << "el valor ingresado es un numero positivo"<< endl ;
        }
        else
        {
            cout << "el valor ingresado es un numero negativo"<< endl;
        }
    }

    return 0;

}