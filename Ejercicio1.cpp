#include <iostream>//libreria de operaciones de entrada y salida 
#include <string>//libreria de cadenas

using namespace std;


//funcion calculo de sueldo total(sin descuentos aplicados)//
float sueldototal(float *, int *, int*);
//funcion calculo de sueldo real (con descuentos aplicados)//
float sueldoreal(float,float *, float*, float*,float *);


int main()
{
    float sueldo_total, sueldo_real, AFP,ISSS,renta;
    int horas,horas_extra;
    string nombre_empleado;
    char opcion;//permite escoger entre cerrar el programa o ingresar nuevos datos de un nuevo empleado//
    bool repetir = true;//usado con la funcion while para repetir el codigo en caso de ingresar nuevos datos// 
    
    cout<<endl<<endl;
    cout<<"CALCULO DE SALARIO MENSUAL";
    cout<<endl<<endl;

    do//permite repetir el codigo mientras la variable en while sea verdadera//
    {

    cout<<endl<<"Ingrese el nombre del empleado: ";
    cin >>nombre_empleado;
    cout<<endl<< "Digite sus horas trabajadas durante todo el mes: ";
    cin>> horas;
    cout<<"Digite sus horas extras de todo el mes: ";
    cin>> horas_extra;
    cout << endl;

    sueldototal(&sueldo_total, &horas,&horas_extra);
    cout <<"Su sueldo total es: $"<<sueldo_total<<endl;
   
    sueldoreal(sueldo_total,&AFP,&ISSS,&renta,&sueldo_real);
    cout <<"Su sueldo real es de: $"<<sueldo_real<<endl;
        
    cout<<endl<< "Si desea introducir datos de otro empleado presionar la tecla 's' de lo contratio presionar 'n' para terminar: ";
    cout<<endl;
    cin >>opcion;

    //convierte a la variable de while en verdadero o falso y asi determinar si se reptira el codigo con "do"//
    //s(verdadero)=ingresar datos de un nuevo empleado//
    //n(falso)=terminar y cerrar el programa//
        if (opcion=='s')
            {
                repetir=true;
            }
            else if (opcion=='n')
                {
                    repetir=false;
                }
    }
    while(repetir);//segun la desicion del if anterior iniciara de nuevo el codigo o terminara el programa//

    return 0;
}//fin de "int main"//


//funcion que calcula el sueldo total(sueldo sin impuestos incluidos)//
float sueldototal(float *sueldo_total, int *horas, int * horas_extra)
{
    *sueldo_total=(*horas*1.75)+(*horas_extra*2.50);
}


//fncion que calcula el sueldo real(el sueldo con impuestos incluidos)//
float sueldoreal(float sueldo_total,float *AFP, float *ISSS, float*renta, float *sueldo_real)
{
    *AFP=sueldo_total*0.0625;
    *ISSS=sueldo_total*0.04;
 
    //descuento de renta solo si el sueldo es mayor a $500//
    if(sueldo_total>500)
    {
        *renta=sueldo_total*0.10;
    }
    else // si es menor no se descuenta//
    {
        *renta=0;
    }
    
    *sueldo_real = sueldo_total - (*AFP+*ISSS+*renta);
}