//
// Created by Andres on 9/25/19.
//
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Funciones Matematicas.h"
#include "Afin.h"
using namespace std;



int Afin:: generarale() {
    int num;
    srand(time(NULL));
    num=mod(rand(),26);
   //cout<<num<<endl;
   return num;
   }

   Afin::Afin() {
    //cout<<a<<endl<<b<<endl;
    a=generarale();
    int d =mcd(a,tam);
    while(d!=1){
        d=mcd(generarale(),tam);
       // d =mcd(a,tam);
     }
    b= mod(generarale()+generarale(),26);
    cout<<a<<endl<<b<<endl;
}

Afin::Afin(int a, int b) {

   this->a=a=inversa(a,tam);
   this->b=b;
}

string Afin::Encriptado(string mensaje) {
    string cifrado;
    for(int i=0; i<mensaje.size();i++) {
        int x=alfa.find(mensaje.at(i));
        int e =mod((a*x+b),tam);
        //cout<<e<<endl;
        cifrado += alfa.at(e);
    }
cout<<cifrado<<endl;
    return cifrado;
}


string Afin::descifrado(string mensaje) {
string encriptado;
for(int i=0;i<mensaje.size();i++) {
    int y = alfa.find(mensaje.at(i));
    int e = mod((a * (y - b)), tam);
    encriptado += alfa.at(e);
}
cout<< encriptado;
    return encriptado;
}


Afin::~Afin() {
    //gg
}
