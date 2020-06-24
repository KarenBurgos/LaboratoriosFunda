#include <iostream>
#include <cmath>

using namespace std;

int main (void)
{
    int a, b, c;
    double x1, x2;
    
    cout <<endl<<"CALCULO DE FORMULA CUADRATICA" << endl<<endl;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingese el valor de c: ";
    cin >>c;
    cout << endl; 

    x1 = (-b + sqrt((pow(b,2)) - 4*a*c))/(2*a);
    x2 = (-b - sqrt((pow(b,2)) - 4*a*c))/(2*a);

    cout << "valores de x: " << "{" << x1 << "," << x2 <<"}"<<endl;

    return 0;
}