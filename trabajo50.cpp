#include <iostream>
using  namespace std;
int main()
{
    int f=4,c=3,i,acum=0,acum2=0,acum3=0,acum4=0,f1,f2,f3,f4,mayor;
    for ( i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++) 
        {
          cout << "Digite dato para la fila 1 " << " columna " << j + 1 << ": ";
          cin >>f1;
          acum=acum+f1;
        }
        cout<<acum;
        for ( i = 0; i < c; i++)
        {
            cout << "Digite dato para la fila 2 " << " columna " << i + 1 << ": ";
          cin >>f2;
          acum2=acum2+f2;
        }
        cout<<acum2;
        for ( i = 0; i < c; i++)
        {
            cout << "Digite dato para la fila 3 " << " columna " << i + 1 << ": ";
          cin >>f3;
          acum3=acum3+f3;
        }
        cout<<acum3;
        for ( i = 0; i < c; i++)
        {
            cout << "Digite dato para la fila 4 " << " columna " << i + 1 << ": ";
          cin >>f4;
          acum4=acum4+f4;
        }
        cout<<acum4;
        if (acum>mayor)
        {
            mayor=acum;
           cout<<"la suma de la fila 1 con numeros mayores es: "<<mayor;
            if (acum2>mayor)
           {
              mayor=acum2;
              cout<<"la suma de la fila 2 con numeros mayores es: "<<mayor;
            }
           else if (acum3>mayor)
           {
               mayor=acum3;
              cout<<"la suma de la fila 3 con numeros mayores es: "<<mayor;
           }
           else if (acum4>mayor)
            {
              mayor=acum4;
             cout<<"la suma de la fila 4 con numeros mayores es: "<<mayor;
            }
        }  
    }
}