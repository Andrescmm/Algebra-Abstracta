#include <iostream>
#include <string>
#include "Enigma.h"
using namespace std;


int main() {

    string mensaje;
    string code;
    string clave;
    cout<<"Ingrese una clave de 3 letras"<<endl;
    getline(cin,clave);
    cout<<"Ingresa el mensaje"<<endl;
    getline(cin,mensaje);
    Enigma a(clave);
    a.cifrado(mensaje);
    Enigma b(clave,"ndjvuayfhistzob egkrxqpmwlc","oviqxnwafhkrlbdcuysgme zptj","bqhemopnafsgtdvjxwkyzucl ri"  );
    cout<<"Ingresar el mensaje cifrado"<<endl;
    getline(cin,code);
    b.descifrado(code);
    return 0;
}
