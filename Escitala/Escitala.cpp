
#include "Escitala.h"
#include<iostream>
#include <string>

using namespace std;

Escitala::Escitala(int filas, int columnas) {
this->filas=filas;
this->columnas=columnas;
}




string Escitala::Encriptado(string message){
    if((filas*columnas)>message.length()){
        for(int i=message.length();i<filas*columnas; i++){
            message+="w";
        }

    }
    string encriptado;
    for(int i=0;i<filas;i++){
        int temp=0;
        for(int j=i;j<columnas+i;j++,temp=temp+filas){
            encriptado+=message.at(temp+i);
        }
    }
    cout<<endl;
    return encriptado;
}
string Escitala::Descifrado(string message){
    string descifrado;
    for(int i=0;i<filas;i++){
        int t=0;
        for(int j=i;j<columnas+i;j++,t=t+filas){
            descifrado+=message.at(i+t);
        }
    }
    cout<<descifrado<<endl;
    return descifrado;
}
Escitala::~Escitala()
{
//gg
}


