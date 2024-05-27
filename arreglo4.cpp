#include <iostream>
using namespace std;
int main()
{
    int i;
    string arreglo1[2],arreglo2[3];
    arreglo1[1]="fernando";
    arreglo1[2]="oscar";
    
    arreglo2[1]=74;
    arreglo2[2]=56;
    arreglo2[3]=10;

    cout<<"Arreglo 1"<<endl;
    for ( i = 1; i <=2; i++)
    {
        cout<<"el dato de la posicion "<<i; cout<<" es: "<<arreglo1[i]<<endl;
    }
    
    cout<<"Arreglo 2"<<endl;
    for ( i = 1; i <= 3; i++)
    {
        cout<<"el dato de la posicion "<<i; cout<<" es: "<<arreglo2[i]<<endl;
    }
    return 0;
}