#include <iostream>
#include <cstring>

const int longCad= 20;

using namespace std;

struct InfoPorProducto
{
    char nombreArticulo[longCad+1];
    int cantidad;
    float precioUnitario;
    float costoPorArticulo;
}listado[10];/*Declaracion del arreglo*/


void leerDatos(int);
void CostoPorArticulo(int);
void DesplegarDatos(int);
float Total(int,float*);


int main ()
{
    int n;//cantidad del arreglo
    float totalPago;

    cout << endl << endl << "FACTURA" << endl << endl;

    cout << "Cantidad de productos: ";
    cin >> n;
    cin.ignore(100,'\n');
    
    leerDatos(n);
    CostoPorArticulo(n);
    DesplegarDatos(n);
    Total(n,&totalPago);
        cout << "TOTAL A PAGAR: $"<<totalPago;
        cout << endl<<endl;
        cout <<"GRACIAS POR SU COMPRA!";
        cout <<endl<<endl<<endl;

    return 0;
}

void leerDatos(int n)
{
    string nombre;

    for (int i=0;i<n;i++)
    {
        cout << endl ;

        cout <<"Nombre del articulo: ";
        /*limpiar buffer del teclado*/
        getline(cin,nombre,'\n');
        /*Copia la variable nombre a el campo de nombreArticulo del arreglo*/
        strncpy(listado[i].nombreArticulo,nombre.c_str(),longCad); 
        listado[i].nombreArticulo[longCad]='\0';

        cout << "cantidad: ";
        cin >> listado[i].cantidad;

        cout << "precio unitario: $";
        cin >> listado[i].precioUnitario;
        /*Limpiar el buffer para que no haya problema al iniciar de nuevo el ciclo for*/
        cin.ignore(100,'\n');
    }
}



void CostoPorArticulo(int n)
{
    for(int i=0;i<n;i++)
    {
        listado[i].costoPorArticulo = listado[i].cantidad * listado[i].precioUnitario;
    }
}


void DesplegarDatos(int n)
{
    cout << endl<<endl<<endl<<endl;
    
    cout << "FACTURA";
    cout <<endl<<endl;

    for (int i=0;i<n;i++)
    {
        cout << "PRODUCTO: " << listado[i].nombreArticulo;
        cout << endl;
        cout << "CANTIDAD: " << listado[i].cantidad;
        cout << endl;
        cout << "PRECIO UNITARIO: $" << listado[i].precioUnitario;
        cout << endl;
        cout << "TOTAL DEL ARTICULO: $" << listado[i].costoPorArticulo;
        cout << endl<<endl;
    }
}



float Total(int n, float *totalPago)
{

    for (int i=0;i<n;i++)
    {
        *totalPago = *totalPago + listado[i].costoPorArticulo;
    }
    
}