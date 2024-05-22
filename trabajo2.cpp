#include <iostream>
using namespace std;
int main()
{
    int unidad,subtotal,precio,descuento,iva,total;
    cin>>unidad;
    cout<<"cantidad de unidades: "<<unidad<<endl;
    cin>>precio;
    cout<<"precio: "<<precio<<endl;
    subtotal=unidad*precio;
    cout<<"subtotal= "<<subtotal<<endl;
    if (subtotal<1000)
    {
        descuento=0;
    }
    if (subtotal>1000 && subtotal<2000)
    {
        descuento=subtotal*0.1;
        cout<<"su descuento es de: "<<descuento<<endl;
    }
    if (subtotal>2000 && subtotal<3000)
    {
       descuento=subtotal*0.2;
       cout<<"su descuento es de: "<<descuento<<endl;
    }
    if (subtotal>3000)
    {
        descuento=subtotal*0.3;
        iva=subtotal*0.16;
        total=subtotal-descuento*iva;
        cout<<"el descuento es de: "<<total<<endl;
    }
    return 0;
}