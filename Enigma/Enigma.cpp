#include "Enigma.h"
#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
using namespace std;

Enigma::Enigma(string clave){
    this->clave=clave;
}
string Enigma::Encriptado(string mensaje ) {
for(int i=0;i<mensaje.length();i++){

        int a = alfa.find(clave.at(i));
        string corte = alfa.substr(a);
        string suma = alfa + corte;
        suma.erase(a);
        string abc = corte + suma;
        int e=mensaje.at(i);
        int b =abc.at(e);
        int c=rot1.find(abc.at(b));
        cout<<abc<<endl;
        cout<<b<<endl;

        int a1 = alfa.find(clave.at(i+1));
        string corte1 = alfa.substr(a1);
        string suma1 = alfa + corte1;
        suma1.erase(a1);
        string abc1 = corte1 + suma1;
        int busq=abc1.find(rot1.at(b));

       int a2 = alfa.find(clave.at(i+2));
       string corte2 = alfa.substr(a2);
       string suma2 = alfa + corte2;
       suma2.erase(a2);
       string abc2 = corte2 + suma2;
       int busq1=abc2.find(rot2.at(busq));

       cout<<rot3.at(busq1)<<endl;



}
return 0;
}
