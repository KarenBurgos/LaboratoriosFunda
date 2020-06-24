#include <iostream>

using namespace std;

int main (void)
{
    int num1, num2, num3, promedio;
    
    cout <<endl;
    cout << "CALCULO DE PROMEDIO DE 3 NUMEROS: "<<endl<<endl;

    cout << "Ingrese su primer valor: ";
    cin >> num1;
    cout << "Ingrese su segundo valor: ";
    cin >> num2;
    cout << "Ingrese su tercer valor: ";
    cin >> num3;
    cout <<endl;
    
    promedio = (num1 + num2 + num3)/3; 

    cout << "Su promedio es: "<< promedio << endl;

    return 0;
    
}