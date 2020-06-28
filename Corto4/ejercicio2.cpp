#include<iostream>

using namespace std;

//calcula el promedio de estatura//
float promedio(float[],float *);
//evalua cuantos alumnos estan arriba y abajo de la media//
float evaluacion(float[],float *);

int main()
{
    float prom,sumatotal;
    float totalestaturas[25];
    int i;
    
    cout << endl << endl;
    cout << "PROMEDIO DE ESTATURA"<<endl<<endl;
    cout << "Ingrese las estatura de las 25 alumnos" <<endl;
    
    for (i = 0; i < 25; i++)//Ingreso de estaturas//
    {
        cout<< ++i<<". ";//numeracion de alumnos ingresados//
        cin>> totalestaturas[--i];
    }
    

    promedio(totalestaturas,&prom); 
    
    cout << "La estatura promedio es de: " << prom << " m";
    
    evaluacion(totalestaturas,&prom);

    return 0;
}


    
float promedio(float totalestaturas[], float *prom)
{
    int i;
    float n, sumatotal;
    for (i=0;i<25;i++)
    {
        n=totalestaturas[i];
        sumatotal= sumatotal+ n;
    }
    *prom= sumatotal/25;
}



float evaluacion (float totalestaturas[], float* prom)
{
    int i, mayor = 0, menor = 0;

    for (i = 0; i < 25; i++)
    {
        if (totalestaturas[i] > *prom)
        {
           mayor = mayor + 1; 
        }
            else
            {
                menor = menor + 1;
            }
        
    }
    cout << endl << endl;
    cout<< mayor << " alumnos estan por encima del promedio de estatura";
    cout << endl;
    cout << menor << " alumnos estan por debajo del promedio de estatura";
}