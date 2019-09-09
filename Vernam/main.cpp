#include <iostream>
#include <string>
#include "Vernam.h"
using namespace std;



int main(){
    string mensaje;
    cout<<"Ingresar las letras por teclado"<<endl;
    cin>>mensaje;
    int tam=mensaje.length();

    Vernam emisor(tam);
    emisor.cifrado(mensaje);

    return 0;
}
