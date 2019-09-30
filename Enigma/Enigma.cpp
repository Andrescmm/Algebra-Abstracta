#include "Enigma.h"
#include <iostream>
#include <string>
using namespace std;

Enigma::Enigma(string clave) {
    this->clave=clave;


    int a1 = alfa1.find(clave.at(0));
    string corte1 = alfa1.substr(a1);
    string suma1 = alfa1 + corte1;
    suma1.erase(a1);
    string abc1 = corte1 + suma1;
    //cout<<abc1<<endl;
    alfa1+=alfa1.substr(0,alfa1.find(clave.at(0)));
    alfa1.erase(0,alfa1.find(clave.at(0)));
    //cout<<alfa1<<endl;

    int a2 = alfa2.find(clave.at(1));
    string corte2 = alfa2.substr(a2);
    string suma2 = alfa2 + corte2;
    suma2.erase(a2);
    string abc2 = corte2 + suma2;
    //cout<<abc2<<endl;
    alfa2+=alfa2.substr(0,alfa2.find(clave.at(1)));
    alfa2.erase(0,alfa2.find(clave.at(1)));
    //cout<<alfa2<<endl;
    int a3 = alfa3.find(clave.at(2));
    string corte3 = alfa3.substr(a3);
    string suma3 = alfa3 + corte3;
    suma3.erase(a3);
    string abc3 = corte3 + suma3;
    //cout<<abc3<<endl;
    alfa3+=alfa3.substr(0,alfa3.find(clave.at(2)));
    alfa3.erase(0,alfa3.find(clave.at(2)));
    //cout<<alfa3<<endl;

}

Enigma::Enigma(string clave, string rot1, string rot2, string rot3) {
    this->rot1=rot1;
    this->rot2=rot2;
    this->rot3=rot3;
    this->clave=clave;


    int a1 = alfa1.find(clave.at(0));
    string corte1 = alfa1.substr(a1);
    string suma1 = alfa1 + corte1;
    suma1.erase(a1);
    string abc1 = corte1 + suma1;
    //cout<<abc1<<endl;
    alfa1+=alfa1.substr(0,alfa1.find(clave.at(0)));
    alfa1.erase(0,alfa1.find(clave.at(0)));
    //cout<<alfa1<<endl;

    int a2 = alfa2.find(clave.at(1));
    string corte2 = alfa2.substr(a2);
    string suma2 = alfa2 + corte2;
    suma2.erase(a2);
    string abc2 = corte2 + suma2;
    //cout<<abc2<<endl;
    alfa2+=alfa2.substr(0,alfa2.find(clave.at(1)));
    alfa2.erase(0,alfa2.find(clave.at(1)));
    //cout<<alfa2<<endl;
    int a3 = alfa3.find(clave.at(2));
    string corte3 = alfa3.substr(a3);
    string suma3 = alfa3 + corte3;
    suma3.erase(a3);
    string abc3 = corte3 + suma3;
    //cout<<abc3<<endl;
    alfa3+=alfa3.substr(0,alfa3.find(clave.at(2)));
    alfa3.erase(0,alfa3.find(clave.at(2)));
    //cout<<alfa3<<endl;

}

//cifrado
string Enigma::cifrado(string mensaje ) {


    string cifrado;
    for (int i = 0; i<mensaje.length(); i++) {
        cifrado += rot3.at(alfa3.find(rot2.at(alfa2.find(rot1.at(alfa1.find(mensaje.at(i)))))));

        if (i >5) {
            alfa1 += alfa1.at(0);
            //cout<<alfa1<<endl;
            alfa1.erase(0, 1);
            //cout<<alfa1<<endl;
        }
        if ((i >9 ) and (i <13)) {
            alfa1 += alfa1.at(0);
            alfa1.erase(0, 1);
            alfa2 += alfa2.at(0);
            alfa1.erase(0, 1);
        }
        if (i > 13) {
            alfa1 += alfa1.at(0);
            alfa1.erase(0, 1);
            alfa2 += alfa2.at(0);
            alfa2.erase(0, 1);
            alfa2 += alfa2.at(0);
            alfa2.erase(0, 1);
        }

    }

    cout << cifrado << endl;
    return cifrado;

}

//descrifado
string Enigma::descifrado(string mensaje ) {


    string descifrado;
    for (int i = 0; i<mensaje.length(); i++) {
        descifrado += alfa1.at(rot1.find(alfa2.at(rot2.find(alfa3.at(rot3.find(mensaje.at(i)))))));

        if (i >5) {
            alfa1 += alfa1.at(0);
            //cout<<alfa1<<endl;
            alfa1.erase(0, 1);
            //cout<<alfa1<<endl;
        }
        if ((i >9 ) and (i <13)) {
            alfa1 += alfa1.at(0);
            alfa1.erase(0, 1);
            alfa2 += alfa2.at(0);
            alfa1.erase(0, 1);
        }
        if (i > 13) {
            alfa1 += alfa1.at(0);
            alfa1.erase(0, 1);
            alfa2 += alfa2.at(0);
            alfa2.erase(0, 1);
            alfa2 += alfa2.at(0);
            alfa2.erase(0, 1);
        }

    }

    cout << descifrado << endl;
    return descifrado;

}
