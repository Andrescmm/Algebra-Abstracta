#ifndef RSA_H
#define RSA_H
#include<iostream>
#include <string.h>
#include<NTL/ZZ.h>

using namespace std;
using namespace NTL;

class RSA
{
    public:
        RSA(int bits);
        RSA (ZZ p1, ZZ p2);
        //ZZ exponenciacion(ZZ,ZZ);
        string cifrar (string mensaje,ZZ , ZZ);
        string descifrar(string cifrado);
        //ZZ generarprimos (int bits);
        ZZ ExponenciacionModular(ZZ num, ZZ e, ZZ mo);
        ZZ Resto_chino(ZZ);
    private:
        ZZ e,modN,n,p,q,phi,d,dp,dq,qCp,pCq;
        string alphabet="abcdefghijklmnopqrstuvywxz ABCDEFGHIJKLMNOPQRSTUVYWXZ123456789";

};

#endif // RSA_H
