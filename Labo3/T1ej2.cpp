#include <iostream>
#include <cmath>

#define PI 3.1416

using namespace std;

int main (void)
{
    int radio, perimetro, area;

    cout <<endl<<"CALCULO DEL AREA Y PERIMETRO DE UN CIRCULO"<< endl<<endl;

    cout <<"Ingrese el radio del circulo:";
    cin >> radio;
    cout <<endl;

    perimetro = 2 * PI * radio;
    cout <<"El perimetro del circulo es de: "<< perimetro << endl;

    area = PI * pow(radio,2); 
    cout <<"El area del circulo es de: "<< area<<endl<<endl;

    return 0;
}