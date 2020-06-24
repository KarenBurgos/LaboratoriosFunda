#include <iostream>
#include <string>
using namespace std;

int main()
{
    string palabra;

    cout << endl << "CALCULO DE LONGITUD DE UNA PALABRA Y SI SU LONGITUD ES PAR O IMPAR "<< endl << endl;
    
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (palabra.length()>10)
    {
        cout << "La palabra tiene mas de 10 caracteres";
    }
    else {
        cout << "La palabra tiene menos de 10 caracteres";
    }

    if (palabra.length()%2==0)
    {
        cout << " y el numero de caracteres es par" << endl;
    }
    else
    {
        cout <<" y el numero de caracteres es impar" << endl;
    }

    return 0;
}