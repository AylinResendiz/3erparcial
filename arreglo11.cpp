#include <iostream>
using namespace std;
int main()
{
    int f,c,i,j,numero;
    cout<<"digite el numero de filas ";
    cin>>f;
    cout<<"digite el numero de columnas ";
    cin>>c;
    int matriz[f][c];
    for ( i = 1; i <= f; i++)
    {
        for ( j = 1; i <= c; i++)
        {
          cout<<"digite el dato para la fila "<<i<<" columna "<<j<<endl;
          cin>>numero;
          matriz[i][j]=numero;   
        }
    }
    for ( i = 1; i <= f; i++)
    {
        for ( j = 1; i <= c; i++)
        {
            cout<<"los datos que hay en la matriz son "<<matriz[i][j]<<endl;
        }
    }
    return 0;
}