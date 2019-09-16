
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
    ~Vigennere();

};



#endif //UNTITLED_VIGENNERE_H
