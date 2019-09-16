#include <iostream>
#include <string>
#include <stdlib.h>
#include "Enigma.h"
using namespace std;

int main() {
    string clave;
    string mensaje;
cout<<"Ingresar la clave"<<endl;
getline(cin,clave);
Enigma a(clave);
cout<<"Ingrese el mensaje "<<endl;
getline(cin,mensaje);
a.Encriptado(mensaje);

return 0;
}
