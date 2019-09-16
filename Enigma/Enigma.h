#ifndef ENIGMA_ENIGMA_H
#define ENIGMA_ENIGMA_H
#include <iostream>
#include <string>
using namespace std;

class Enigma {
private:
string clave;
public:
    string alfa ="abcdefghijklmnopqrstuvywxz";
    string rot1= "defglmnohijtuvywxzabckpqrs";
    string rot2= "bmnopqcefuvywxzagjklrsthid";
    string rot3= "pqrsznoabcdeklmvywxfgtuhij";

    Enigma(string clave);
    string Encriptado(string mensaje);
    string Desencriptado(string cifrado);



    
};


#endif //ENIGMA_ENIGMA_H
