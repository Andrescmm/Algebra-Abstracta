#include "Vigennere.h"
#include "Funciones Matematicas.h"
#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
using namespace std;

Vigennere::Vigennere(){}

Vigennere::Vigennere(int tam){
    this->tam=tam;
    srand(time(NULL));
    int  aleatorio, Desde=0, top=alfa.length();

    for(int i=0;i<tam;i++){
        aleatorio= mod(rand(),(top-Desde+1))+Desde;
        //aleatorio = rand()%(top-Desde+1)+Desde;
        clave+=(alfa.at(aleatorio));
    }
    cout<<clave<<endl;
}

Vigennere::Vigennere(string clave){
    this->tam=clave.length();
    this->clave=clave;

}

Vigennere::~Vigennere(){}


string Vigennere::Encriptado(string mensaje){


    for(int i=0;i<mensaje.size();i++){
        int m =alfa.find(mensaje.at(i));
        int c=alfa.find(clave.at(i));
        int sumat=mod((m+c),alfa.length());
        mensaje.at(i)=alfa.at(sumat);
    }
    cout<<mensaje<<endl;
    return mensaje;
}




string Vigennere::Desencriptado(string mensaje){
    int large=mensaje.size();
    for (int i=0;i<large;i++){
        int  x=alfa.find(mensaje.at(i));
        int  y=alfa.find(clave.at(i));
        int resta=mod((x-y),alfa.length());
        if(resta<0){
            resta=mod((resta+alfa.length()),alfa.length());
        }
        mensaje.at(i)=alfa.at(resta);
    }

    cout<<mensaje<<endl;
    return mensaje;
}
