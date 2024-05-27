#include <iostream>
using namespace std;
int main()
{
    int i,azar(100);
    int num[10];
    for ( i = 1; i <= 10 ; i++)
    {
        num[i]=azar+1;
    }
    for ( i = 1; i <= 10; i++)
    {
        cout<<"los numeros aleatorios son: "<<num[i]<<endl;
    }
    return 0;
}