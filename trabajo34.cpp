#include <iostream>
#include <cstring>
using namespace std;
int factura(int precio, int cantidad)
{
    int total=0;
    total=precio*cantidad;
}
int main() 
{
    char contra[12], nombre[20];
    int co, precio, cantidad, total, co2;
    co = 0;
    co2 = 0;
    
    do {
        co = co + 1;
        cout << "usuario:\n";
        cin >> nombre;
        cout << "contraseña:\n";
        cin >> contra;   
        if (strcmp(contra, "2b32") == 0 && strcmp(nombre, "Aylin") == 0) {
            cout << "Bienvenido al sistema\n";
            break;
        }
        if (co >= 3) {
            cout << "Has excedido el número máximo de intentos\n";
            return 0;
        }
    } while (co < 3);

    while(co<4) {
        cout << "introduzca el precio del articulo\n";
        cin >> precio;

        co2=co2+factura(precio,cantidad);

        if (precio == 0) {
            break;
        }

        cout << "introduzca la cantidad de unidades vendidas\n";
        cin >> cantidad;

        if (cantidad < 0) {
            cout << "ingrese un numero positivo\n";
            continue;
        }

        co2=co2+factura(precio,cantidad);

    } 

    cout << "El importe total es de " << co2 << endl;

    return 0;
}