#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int codigo, farenheit, coord_x,coord_y;
    codigo= 3467;
    farenheit= 123.456;
    coord_x= 525;
    coord_y= 725;
    a=b=c=45;
    a=(b=(c=45));
    cout<<"valor de la variable codigo "<<codigo<<endl;
    cout<<"valor de la variable farenheit "<<farenheit<<endl;
    cout<<"valor de la variable coord_x "<<coord_x<<endl;
    cout<<"valor de la variable coord_y "<<coord_y<<endl;
    cout<<"valor de la variable a "<<a<<endl;
    cout<<"valor de la variable b "<<b<<endl;
    cout<<"valor de la variable c "<<c<<endl;
}