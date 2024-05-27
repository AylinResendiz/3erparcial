#include <iostream>
using namespace std;
int main()
{
    int i,t,acum,num,acum2;
    acum=0; acum2=0;
    cout<<"digite el tamano de vector 1: ";
    cin>>t;
    int vector1[t];
    for ( i = 1; i <= t; i++)
    {
        cout<<"digite un numero "<<i<<": ";
        cin>>num;

        vector1[i]=num;
        acum=acum+vector1[i];
    }
    cout<<"digite el tamano de vector 2: ";
    cin>>t;
    int vector2[t];
    for ( i = 1; i <= t; i++)
    {
        cout<<"digite un numero "<<i<<": ";
        cin>>num;

        vector2[i]=num;
        acum2=acum2+vector2[i];
    }
    int vector3[2];
    vector3[1]=acum+acum2;
    cout<<"el resultado total es: "<<vector3[1];
    return 0;
}