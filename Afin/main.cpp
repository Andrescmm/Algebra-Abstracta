#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include "Afin.h"
using namespace std;

int main(){


    int x,y;
    ifstream entrada("texto8.txt ");
    string mensaje;
    string code;
    getline(entrada,mensaje);
    cout<<mensaje<<endl;
    Afin a;
    a.Encriptado(mensaje);
    cout<<"Ingresa los numeros"<<endl;
    cin>>x>>y;
    entrada.close();
    cout<<"Ingresa el mensaje cifrado"<<endl;
    getline(cin,code);
    Afin b(x,y);
    b.descifrado(code);


    return 0;
}
