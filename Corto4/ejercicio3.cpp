#include <iostream>

using namespace std;

void llenarArreglo(float [5][5], float);
float promedio(float [5][5], float,float[5]);


int main(void) 
{
    float a[5][5], m;
    float prom[5];
    
    cout << endl;
    cout << "PROMEDIO DE NOTAS" << endl << endl;

    cout << "Cantidad de alumnos: ";
    cin >> m;

    llenarArreglo(a, m);
    promedio(a, m,prom);

    cout << endl;
    return 0;
}


void llenarArreglo(float x[5][5], float m)
{

    for(int i = 0; i < m; i++){

        cout <<endl<< "ALUMNO " <<i+1<<endl;

        for(int j = 0; j < 5; j++){
            cout << "Ingrese nota " << j+1<<": ";//numero de nota//

            cin >> x[i][j];
        }
    }
}


float promedio(float x[5][5], float m, float prom[5])
{
    float n,suma;

     for(int i = 0; i < m; i++)//filas//
     {
        suma=0;//descartar el valor anterior de suma//

        for(int j = 0; j < 5; j++)//columnas//
        {
            n=x[i][j];
            suma = suma+ n;
        }
        prom[i]=suma;
        prom[i]=prom[i]/5;
    }

    cout <<endl<<endl;
    
    for(int i = 0; i < m; i++)
    {
        if (prom[i]>5)//si su promedio es mayor a 5 aprueba//
        {
            cout <<endl;
            cout << "El estudiante "<< i+1 << " aprobo";
            cout <<endl<<"Su promedio es: "<< prom[i];
            cout <<endl;
        }
        else
        {
            cout << endl;
            cout << "El estudiante "<< i+1 << " reprobo";
            cout <<endl<<"Su promedio es: "<< prom[i];
            cout <<endl;
        }
    }
}