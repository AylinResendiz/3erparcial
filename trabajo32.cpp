#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char contra[12],nombre[20];
	int co;
	co=0;
	do{
		co=co+1;
		cout<<"usuario:\n";
		cin>>nombre;
		cout<<"contraseña:\n";
		cin>>contra;
		if(strcmp(contra,"2b32")==0 && strcmp(nombre,"Aylin")==0){
			cout<<"Bienvenido al sistema\n";
			break;
		}
			if (co >= 3) {
        cout<<"Has excedido el número máximo de intentos\n";
    	}
    }while(co<3);
}