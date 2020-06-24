#include <iostream>

using namespace std;

//funcion para calcular el mcd//
int calculomcd(int*);

//calculo de hora//
int hora(int*, int*, int*);

//caculo de año bisiesto//
bool anyo(bool*);

//calculo de fecha siguiente//
int fecha (int*, int*, int*);



int main()
{
    int opcion;

    do{ //mantenerse en el programa, amenos que se presione la opcion salir//

        cout<<endl<<endl;
        cout<<"LABORATORIO 3";
        cout <<endl<<endl;

        cout <<"Menu:";
        cout <<endl<<endl;

        cout<<"1) EJERCICIO 1: Calculo mcd de dos numeros";
        cout <<endl;
        cout<<"2) EJERCICIO 2: Calculo de hora";
        cout <<endl;
        cout<<"3) EJERCICIO 3: Calculo de año bisiesto";
        cout <<endl;
        cout<<"4) EJERCICIO 4: Calculo de dia siguiente";
        cout <<endl;
        cout<<"5) Salir";
        cout <<endl<<endl;

        cout <<"Ingrese el numero ejercicio que desea ver: "; 
        cin >> opcion;

        //al entrar a los diferentes ejercicios//
        switch (opcion)
        {
            //1) CAlCULO DE MCD//
            case 1: 
         
                int mcd;

                calculomcd(&mcd);
                cout <<"el mcd es: "<<mcd;
                break;


            //2) calculo de hora un segundo despues//
            case 2:

                int hh,mm,ss;

                hora(&hh, &mm, &ss);
                cout <<"La hora un segundo despues de la actual es de: ";
                if (hh<10)//agregar 0 antes de la hora si es menor que 10 para tener formato 00:00:00//
                {            
                    cout<<0<<hh;
                }
                else 
                {
                    cout<<hh;
                }
                if (mm<10)
                {
                    cout <<":0"<<mm;
                }
                else
                {
                    cout << ":"<<mm;
                }
                if (ss<10)
                {
                    cout<<":0"<<ss;
                }
                else 
                {
                    cout<<":"<<ss;
                }
                break;


            //calculo si un año es bisiesto
            case 3:

                bool bisiesto;

                anyo(&bisiesto);
                if (bisiesto==1)
                {
                 cout <<"es bisieto";
                }
                else
                {
                    cout <<"No es bisiesto";
                }
                break;


            //calculo dia siguiente//
            case 4:

                int dia, mes, year;

                fecha (&dia, &mes, &year);
                {
                    cout <<"el dia siguiente es: ";
                    cout <<dia<<"/"<<mes<<"/"<<year;

                    break;
                }   
        }
    }while(opcion!=5);//manetener en el programa a menos que se escoja la opcion salir//
}


 //FUNCION CALCULO DEL MCD//
int calculomcd(int *mcd)
{

    int mayor, menor,residuo;

        cout << endl << endl;
        cout << "CALCULO MCD DE DOS NUMEROS";   
        cout <<endl<<endl;

        cout << "Ingrese el numero mayor: ";
        cin >> mayor;

        cout << endl;

        cout << "Ingrese el numero menor";
        cin >> menor;
    
        cout << endl;
        
    residuo=mayor%menor;

    do
    {
        if (residuo==0)
        {
            *mcd=menor;
        }
        else if (residuo!=0)
        {
            mayor=menor;
            menor=residuo;

            residuo=mayor%menor;

            *mcd=menor;
        }
    }
    while (residuo !=0);
}

//FUNCION PARA CALCULAR EL TIEMPO UN SEGUNDO DESPUES//
int hora (int *hh, int*mm, int*ss)
{
    cout << endl << endl;
    cout <<"CALCULO DE HORA UN SEGUNDO DESPUES";
    cout <<endl << endl;

    cout <<"Ingrese la hora actual: ";
    cin >> *hh;
    cout << endl;

    cout <<"Ingrese los minutos: ";
    cin >> *mm;
    cout <<endl;

    cout <<"Ingrese los segundos: ";
    cin >> *ss;
    cout << endl;

    *ss=*ss+1;//un segundo despues//

    if (*ss==60)//Al llegar a 60 segundo se cumple un minuto//
    {
        *mm=*mm+1;//minuto siguiente//
        *ss=0;//se cuentan de 0 los segundos//
    }

    if (*mm==60)//al llegar a 60 minutos se cumple una hora//
    {
        *hh=*hh+1;//hora siguiente//
        *mm=0;//se cuentan desde 0 los minutos//
    }
    if (*hh==25)//fin del dia//
    {
        *hh=0;
        *mm=0;
        *ss=0;
    }
}

//FUNCION PARA CALCULAR SI UN AÑO ES BISIESTO//
bool anyo(bool*bisiesto)
{
    int anyo;//*año//

    cout << endl << endl;
    cout <<"CALCULO DE AÑO BISIESTO";
    cout <<endl << endl;

    cout <<"Ingrese el año: ";
    cin >> anyo;
    cout << endl; 

    if (anyo%400==0)//si bisiesto//
    {
        *bisiesto=true;
    }
    else if (anyo%4==0 & anyo%100!=0)//si bisiesto//
    {
        *bisiesto=true;
    }
    else//no es bisiesto//
    {
        *bisiesto=false;
    }
}


//FUNCION CALCULO DE DIA SIGUIENTE//
int fecha (int*dia, int*mes, int*year)
{ 
    cout << endl << endl;
    cout <<"CALCULO DE FECHA";
    cout <<endl << endl;

    cout<<" NOTA: no colocar cero antes del numero en caso de que sea menor a 10. Eje. 02";
    cout <<endl << endl;

    cout <<"Ingrese el dia : ";
    cin >> *dia;
    cout << endl;

    cout <<"Ingrese el mes: ";
    cin >> *mes;
    cout <<endl;

    cout <<"Ingrese el año: ";
    cin >> *year;
    cout << endl;
    
    *dia=*dia+1;//dia siguiente//

    //MESES DE 30 DIAS//    
    //error de digitación, mas de 30 dias//
    if ((*mes==4||*mes==6 ||*mes==9||*mes==11)&*dia>=32)//si el usuario ingresa 31 en dias la suma de un dia mas es 32//
    {
        cout <<"Este mes solo tiene 30 dias"<<endl;
        exit(1);
    }
    //fin de meses de 30 dias//  
    else if (*mes==4 & *dia==31)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=5;
    }
    else if (*mes==6 & *dia==31)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=7;
    } 
    else if (*mes==9 & *dia==31)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=10;
    } 
    else if (*mes==11 & *dia==31)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=12;
    }

    
    //MESES DE 31 DIAS//
    //error de digitación, mas de 31 dias en meses de solo 31 dias//
    if ((*mes==1||*mes==3 ||*mes==5||*mes==7||*mes==8||*mes==10||*mes==12)&*dia>=33)
    {
        cout << "Este mes solo tiene 31 dias"<<endl;
        exit(1);
    }
    //mes de 31 dias al llegar a su ultimo dia//
    else if (*mes==1 & *dia==32)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=2;
    }
    else if (*mes==3 & *dia==32)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=4;
    }
    else if (*mes==5 & *dia==32)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=6;
    }
    else if (*mes==7 & *dia==32)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=8;
    }
    else if (*mes==8 & *dia==32)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=9;
    }
    else if (*mes==10 & *dia==32)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=11;
    }
    else if (*mes==12 & *dia==32)//primer dia del siguiente mes//
    {
        *dia=1;
        *mes=1;
    }
   
    //febrero, caso particular//
    bool bisiesto;//para calcular si es año bisiesto//
    do
    {
        if (*year%400==0)//si bisiesto//
        {
            bisiesto=true;
        }
        else if (*year%4==0 & *year%100!=0)//si bisiesto//
        {
            bisiesto=true;
        }
        else//no es bisiesto//
        {
            bisiesto=false;
        }
        
        if (bisiesto==true & *dia>=31)
            {
                cout<<"Febrero no puede tener mas de 29 dias" ;
                exit (1);
            }
            else if (bisiesto==true & *dia==30)
            {
                *dia=1;
                *mes=3;
            }
            else if (bisiesto==false & *dia>=30)
            {
                cout<<"Febrero no puede tener mas de 28 dias" ;
                exit(1);
            }
            else if (bisiesto==false & *dia==29)
            {
                *dia=1;
                *mes=3;
            }
    } while (*year==2);
        
}
