#include <iostream>

using namespace std;

int main()
{
    int n1, n2;

    cout <<endl<<"CALCULO DE NUMEROS DIVISIBLES ENTRE ELLOS"<<endl<<endl;

    cout <<"ingrese el valor del dividendo: ";
    cin >> n1;
    cout << "ingrese el valor del divisor: ";
    cin >> n2;
    
    if (n1%n2 == 0)
    {
        cout <<endl<<n1<< " y "<< n2 <<" Si son divisibles entre ellos"<<endl;    
    }
    else 
    {
        cout <<n1<< " y "<< n2 <<" No son divisibles entre ellos"<<endl;
    }

    return 0;
    
}