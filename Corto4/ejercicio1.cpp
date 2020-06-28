#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

string clavemuercielago(string);//calve murcielago//

int main()
{
    string palabra;

    cout <<endl;
    cout <<"Ingrese su palabra: ";
    getline(cin,palabra);//leer espacios//

    clavemuercielago(palabra);
     

    return 0;
}


string clavemuercielago(string palabra)
{
    
    for (int i=0;i<palabra.size();i++)
    //palabra.size = terminar el ciclo hasta que termine la longitud de la palabra ingresada//
    {
        
        switch (palabra [i])
        {
            case 'm':
            {
                palabra [i]='0';
                break;
            }

            case 'u':
            {
                palabra [i]='1';
                break;
            }

            case 'r':
            {
                palabra [i]='2';
                break;
            }

            case 'c':
            {
                palabra [i]='3';
                break;
            }

            case 'i':
            {
                palabra [i]='4';
                break;
            }

            case 'e':
            {
                palabra [i]='5';
                break;
            }

            case 'l':
            {
                palabra [i]='6';
                break;
            }

            case 'a':
            {
                palabra [i]='7';
                break;
            }

            case 'g':
            {
                palabra [i]='8';
                break;
            }

            case 'o':
            {   
                palabra [i]='9';
                break;
            }
        
            {
            default:
                palabra[i];
                break;
            } 
        }
    }

    cout <<"Clave murcielago: ";
    
    for (int i=0;i<palabra.size();i++)
    {
        cout <<palabra[i];
    }

    cout << endl<<endl;
}
