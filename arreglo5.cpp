#include <iostream>
using namespace std;
int main()
{
  int acum,t,i,num;
  acum=0;
  cout<<"digite el tamano del vector (arreglo)"<<endl;
  cin>>t;
  int vector[t];
  for ( i = 1; i <= t; i++)
  {
    cout<<"digite un numero ";
    cin>>num;

    vector[i]=num;
    acum=acum+vector[i];
  }
  
  for ( i = 1; i <= t; i++)
  {
    cout<<"la suma de: "<<vector[i]<<endl;
  }
  cout<<"es: "<<acum;
  return 0;
}