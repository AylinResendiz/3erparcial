#include <iostream>
using namespace std;
int main()
{
    int num[5];
    int i,numero;
    for ( i = 0; i <= 5-1; i++)
    {
        cout<<"digite un numero para la posicion "<<i<<"\n";
        cin>>numero;
        num[i]=numero;
    }
    for ( i = 0; i <= 5-1; i++)
    {
        cout<<"el dato en la posicion "<<i<<" es "<<num[i]<<"\n";
    }
    return 0;
}