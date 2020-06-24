#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Funcion que demuestra si el usuario ingreso el numero correcto o si se equivoco//
int calculo(int ,int* , int);

int main()
{
    int num_ramdom,num,i;
    string correcto;

    cout<<endl;
    cout<<"JUEGO DE ADIVINAR";
    cout<<endl<<endl;

    cout<<"En este juego tendras que adivinar el numero que se ha guardado previamente.";
    cout<<endl<<endl;
    cout<<"Ten en cuenta: ";
    cout<<endl;
    cout<<"* El numero se encuentra entre el 1 y 100";
    cout<<endl;
    cout<<"* Es un numero entero";
    cout<<endl;
    cout<<"* Tienes solo 5 intentos";
    cout<<endl<<endl;

    cout<<"NOTA: si quieres terminar el juego presiona 0";
    cout<<endl<<endl;


    cout<<"primer intento: ";

    calculo(num,&num_ramdom,i);

}


//Funcion que demuestra si el usuario ingreso el numero correcto o si se equivoco//
int calculo(int num,int* num_ramdom, int i)
{

    srand(time(NULL));//Permite crear un numero aleatorio//
        *num_ramdom = 1 + rand() % (100);//primero se coloca el limite inferior y al final el limite superior//



       for (i=4;i>=1;i--)//muestra el numero de intentos que quedan//
        {

        cin>>num;

            if(num==0) //si se presiona la tecla "x" se termina y cierra el programa, sino continua el codigo//
   {
            cout <<"gracias por intentar";
            exit(0);//funcion que permite cerrar y terminar el programa
   
   }

            else if (num==*num_ramdom)//si el usuario adivina el numero//
            {   
            cout<<"Felicidades lo conseguiste"<<num_ramdom<<"era el numero correcto";
        
            return 0;//si se cumple, el codigo termina aqui//

            }
                else//sino adivina el codigo sigue con las demas oportunidades//
                {
                cout<<endl<<endl;
                cout<<"Fallaste, tienes "<<i<<" intentos"<<endl;//muestra el numero de intentos con ayuda de la funcion for//
            
                    if (num>*num_ramdom)
                    {
                    cout<<"*pista el numero correto es menor al que intentaste*"<<endl; 
                    }
                        else
                        {
                        cout<<"*pista* el numero correto es mayor al que intentaste*"<<endl; 
                        } 
                switch (i)//de acuerdo al numero de intentos (valor de i) se muestra el numero de intento que se esta realizando en el momento//
                {
                case 4://limite inferior de la funcion for//
                    cout <<"segundo intento: ";//ya que el primer intento se realiza fuera de la funcion "for"
                    break;
                case 3:
                    cout <<"tercer intento: ";
                    break;
                case 2:
                    cout <<"cuarto intento: ";
                    break;               
                default:
                    break;
                }
            }
    }

    cout <<endl;
    cout<< "utltimo intento: ";//intento numero 5 al fallar ya nose mostraran pistas por eso se coloco fuera de "for"//
    cin>>num;
    if (num==*num_ramdom)//si adivino en el ultimo intento se notifica//
    {
        cout<<"Felicidades lo conseguiste el numero correcto era: "<<*num_ramdom;

    }
    else//sino adivina en el ultimo intento se muestra cual era la respuesta correcta//
        {
            cout<<"el numero correcto era: "<<*num_ramdom;
        } 
        
   

    return 0;
}