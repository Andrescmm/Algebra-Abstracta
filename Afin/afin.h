//
// Created by Andres on 9/25/19.
//

#ifndef CERAFIN_AFIN_H
#define CERAFIN_AFIN_H

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

class Afin {
private:
int a;
int b;
public:

    string alfa="abcdefghijklmnopqrstuvwxyz0123456789 ";
    int tam= alfa.length();


    Afin();
    Afin(int a, int b);
    int generarale();
    string Encriptado(string mensaje);
    string descifrado(string mensaje);
    ~Afin();

};
