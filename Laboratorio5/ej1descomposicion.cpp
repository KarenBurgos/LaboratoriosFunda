#include <iostream>
void descomponer(int, int*, int*, int*, int*);
using namespace std;


int main (void)
{
  int n, unidad, decena, centena, millar;

  cout<<endl<<"DESCOMPOSICION"<<endl<<endl;

  cout <<"Ingrese entero: ";
  cin >> n;

  descomponer (n, &unidad, &decena, &centena, &millar);

  cout<<n<<" tiene:"<<endl<<endl;
  cout<<unidad<<" unidades"<<endl;
  cout<<decena<<" decenas"<<endl;
  cout<<centena<<" centena"<<endl;
  cout<<millar<<" millares"<<endl;

  cout<<endl;
  return 0;

  
}

void descomponer(int n, int *unidad, int *decena, int *centena, int *millar)
{
  *unidad=n%10;
  n=n/10;
  *decena=n%10;
  n=n/10;
  *centena=n%10;
  n=n/10;
  *millar=n%10;
  n=n/10;
}