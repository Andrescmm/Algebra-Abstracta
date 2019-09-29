#include<iostream>
#include<string>
#include <fstream>
#include "Vigennere.h"
using namespace std ;




int main (){
    string code;
    string mensaje;
    string clave;
    ifstream entrada("mensaje.txt");
    //cout<<"Ingresa un mensaje"<<endl;
    getline(entrada,mensaje);
    Vigennere a (mensaje.length());
    a.Encriptado(mensaje);
    cout<<"Ingresar el texto cifrado"<<endl;
    getline(cin,code);
    cout<<"Ingresar la clave"<<endl;
    getline(cin,clave);
    Vigennere b(clave);
    b.Desencriptado(code);
    return 0;
}



