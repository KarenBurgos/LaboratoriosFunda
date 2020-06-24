#include <iostream>
#include <string>

using namespace std;

int main (void)
{
    string nombre;
    double precio;
    int cantidad;
    double total;

    cout << endl <<"TOTAL DE COMPRA DE UN PRODUCTO" <<endl<<endl;

    cout << "Ingrese nombre del producto comprado: ";
    cin >> nombre;
    cout << "Ingrese el precio de dicho producto: $";
    cin >> precio;
    cout << "Ingrese la cantidad de productos comprados: ";
    cin >> cantidad;
    cout << endl;

    total = precio * cantidad;
    cout << "el total de dinero gastado es de: $" << total<<endl;

    return 0;

}