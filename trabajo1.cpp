#include <iostream>
using namespace std;
int main()
{
    int producto,unidad,subtotal,precio;
    cin>>unidad;
    cout<<"cantidad de unidades: "<<unidad<<endl;
    cin>>precio;
    cout<<"precio: "<<precio<<endl;
    subtotal=unidad*precio;
    cout<<"subtotal= "<<subtotal<<endl;
    return 0;
}