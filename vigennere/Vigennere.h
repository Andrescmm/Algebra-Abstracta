
#ifndef UNTITLED_VIGENNERE_H
#define UNTITLED_VIGENNERE_H
#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
using namespace std;
class Vigennere {
private:
    string clave;
public:
    string alfa="abcdefghijklmnopqrstuvwxyz0123456789 ";
    int tam;
    Vigennere();
    Vigennere(int tam);
    Vigennere(string clave);
    void Encriptado(string mensaje);
    void Desencriptado(string mensaje);

    int funcionM (int x, int y){
        if(x>=0)return x-(x/y)*y;
        return x-((x/y)-1)*y;
    }

    virtual ~Vigennere();

};



#endif //UNTITLED_VIGENNERE_H
