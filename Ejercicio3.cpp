#include <iostream>
#include <string>

//funcion que calcula si es año es bisiesto o no//
int calculo(int, int*);

using namespace std;


int main ()
{
    int anyo,resultado;


    cout <<endl<<endl<<"CALCULO AÑO BISIESTO"<<endl;    

    cout <<endl<<"ingrese el año: ";
    cin >> anyo;//año//

    calculo(anyo,&resultado);
    if(resultado==1)//en la funcion de calculo se determina que si es bisiesto toma el valor de 1//
    {
        cout<<endl<<"es bisiesto"<<endl<<endl;
    }
    else if (resultado==0)//en la funcion de calculo se determina que si no es bisiesto toma el valor de 0//
    {
        cout<<endl<<"no es bisiesto"<<endl<<endl;
    }
    
return 0;
}

//funcion que calcula si es año es bisiesto o no//
int calculo(int anyo, int *resultado)
{

    if(anyo%400==0)//para calcular si el año es bisiesto se determina si es divide entre 400//
    {
        *resultado=1;//si es bisiesto se guarda como 1//
    }

        else if(anyo%4==0 & anyo%100!=0)//sino es divisible entre 400, pero si entre 4 y al mismo tiempo no es divisible entre 100, es bisiesto//
        {
            *resultado=1;//si es bisiesto se guarda como 1//
        }
            else 
                {
                    *resultado=0;//si no es bisiesto se guarda como 0//
                }
}