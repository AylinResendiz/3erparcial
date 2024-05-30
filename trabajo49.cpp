#include <iostream>
using namespace std;
int main()
{
    int num,i=0,acum=0;
    int vector[20];
    for (i=0; i<=20; i++)
    {
        cout<<"i️ngrese el numero entero "<<i+1<<" : ";
        cin>>num;
        vector[i]=num;
        acum+=num;
        if(num==0)
        {
            break;
        }
    }
    cout<<"la suma de sus numeros es de: "<<acum<<endl;
    for(i=0; i<20; i++)
    {
        
        cout<<"el numero "<<i+1<<" ingresado fue: "<<vector[i]<<endl;
    }
    return 0;
}