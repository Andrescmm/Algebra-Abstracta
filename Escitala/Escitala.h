#ifndef ESCITALA_ESCITALA_H
#define ESCITALA_ESCITALA_H
#include<iostream>
#include <string>

using namespace std;

class Escitala {
private:
    int filas;
    int columnas ;
public:
    int tam;

    Escitala(int filas, int columnas);
    string Encriptado(string message);
    string Descifrado(string message);
    ~Escitala();
};


#endif //ESCITALA_ESCITALA_H
