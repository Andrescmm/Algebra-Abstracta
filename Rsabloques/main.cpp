#include <iostream>
#include <string.h>
#include<NTL/ZZ.h>
#include <fstream>
#include "RSA.h"

using namespace std;
using namespace NTL;

///string to ZZ
 ZZ string_a_zz(string message){
     NTL::ZZ number(NTL::INIT_VAL, message.c_str());
     return number;
   }





int main()
{
    string cifrado;
    string es,ns;
    ifstream eh;
    eh.open("e.txt",ios::in);
    getline(eh,es);
    eh.close();
    ///cout<<es<<endl;
    ifstream nh;
    nh.open("d.txt",ios::in);
    getline(nh,ns);
    nh.close();
    ZZ e= string_a_zz(es);
    ZZ n= string_a_zz(ns);

   ///cout<<e<<"   "<<n<<endl;

    ofstream salida;
    int bits;
    string mensaje;
    cout<<"Cuantos bits= ";
    cin>>bits;
    RSA a(bits);
    salida.open("salida.txt",ios::out);
    salida<<a.cifrar("hola como estas es un placer verte",e,n);
    salida.close();


    ifstream entrada;
   entrada.open("salida.txt",ios::in);
    getline(entrada,cifrado);
    //cout<<"Ingrese el mensaje Cifrado"<<endl;
    //cin>>cifrado;
    cout<<a.descifrar(cifrado)<<endl;
    entrada.close();

    return 0;
}
