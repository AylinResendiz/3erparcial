#include <iostream>
using namespace std;
int main()
{
    int p,numero,i,cont;
    cont=0;
    cout<<"digite el numero de posiciones (tamano): ";
    cin>>p;
    int num[p];
    for ( i = 1; i <= p; i++)
    {
        cout<<"digite numero "<<i<<": ";
        cin>>numero;
        num[i]=numero;
    }
    for ( i = 1; i <= p; i++)
    {
        cout<<"los numeros ingresados son: "<<num[i]<<endl;
        if (num[1]>0)
        {
            cont=cont+1;
        }
    }
    cout<<"hay "<<cont<<" numeros positivos."<<endl;
    return 0;
}