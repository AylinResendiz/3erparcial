#include <iostream>
using namespace std;
int main()
{
    int n,i,numero;
    cout<<"digite el tamano del arreglo ";
    cin>>n;
    int num[n];
    for ( i = 1; i <= n; i++)
    {
        cout<<"digite un numero para la posicion "<<i<<endl;
        cin>>numero;

        num[i]=numero;
    }
    for ( i = 1; i <= n; i++)
    {
        cout<<"el dato de la posicion "<<i; cout<<" es: "<<num[i]<<endl;
    }
    return 0;
}