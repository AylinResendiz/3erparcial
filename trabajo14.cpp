#include <iostream>
using namespace std;
int main()
{
    int n,i,mayor,menor,sum=0;
    cout<<"ingrese 10 numeros enteros"<<endl;
    for ( i = 1; i <= 10; i++)
    {
        cin>>n;
        if (n>mayor)
        {
            mayor=n;
        }
        else if (n<menor)
        {
            menor=n;
        }
        sum=mayor+menor;
    }
    cout<<"el numero mayor es: "<<mayor<<endl;
    cout<<"el numero menor es: "<<menor<<endl;
    cout<<"la suma de el menor y mayor es: "<<sum<<endl;
    return 0;
}