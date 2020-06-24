#include <iostream>
#include <string>

using namespace std;

int main(){
    string palabra;

    cout << endl << "LA PALABRA INICIA Y FINALIZA CON LA MISMA LETRA" << endl << endl;

    cout << "ingrese una palabra: ";
    cin >> palabra;

    if(palabra.front()==palabra.back())
    {
        cout << endl << palabra << " empieza y termina con la misma letra" << endl;
    }
    else
    {
        cout << endl << palabra << " no empieza y termina con la misma letra" << endl;
    }

    return 0;
}