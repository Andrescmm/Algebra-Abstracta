
#include <iostream>
#include <ctime>
#include <bitset>
#include <cstdlib>
#include <string>
#include <random>
#include "Vernam.h"
using namespace std;

int mod (int x, int y){
    if(x>=0)return x-(x/y)*y;
    return x-((x/y)-1)*y;
}


Vernam::Vernam(int tam){
    this->tam=tam;
    srand(time(NULL));
    int i, aleatorio, DESDE=0, HASTA=alfabeto.length();
    for (i = 0; i < tam; i ++){
        aleatorio = mod(rand(),(HASTA-DESDE+1)+DESDE);
        clave+=(alfabeto.at(aleatorio));
    }
    cout<< "clave: "<<clave<<endl;
}
Vernam::Vernam(string clave){
    this->tam=clave.length();
    this->clave=clave;
}
string  Vernam::cifrado(string mensaje){
    for (int i=0 ; i< tam;i++){
        claveNum[i]=to_string(alfabeto.find(clave.at(i)));
        mensajeNum[i]=to_string(alfabeto.find(mensaje.at(i)));
    }
    string cifrado;
    for (int i=0 ; i< tam;i++){
        bitset<8> aqui(alfabeto.find(mensaje.at(i)));
        bitset<8> r(alfabeto.find(clave.at(i)));
        bitset<8> xORTemp(aqui ^= r);
        int pos =(xORTemp.to_ulong());
        while (pos>alfabeto.length()){
            //if(pos>alfabeto.length()){
            pos = mod(pos,alfabeto.length());
            //}
        }
        cifrado+=alfabeto.at(pos);
    }
    cout<<"cifrado: "<<cifrado<<endl;

    string cifNum[tamAlfabeto];
    cout<<endl;
    for (int i=0 ; i< tam;i++){
        cifNum[i]=to_string(alfabeto.find(cifrado.at(i)));
    }

    cout<<endl;

    return cifrado;
}
Vernam::~Vernam()
{
    //gg
}