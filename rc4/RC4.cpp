#include "RC4.h"
#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <string>

#include <NTL/ZZ.h>
using namespace std;
using namespace NTL;

ZZ mod(ZZ t, ZZ m) {
	ZZ mo ;
	mo=-1;
	if (t < 0)
		return (t * mo >= m) ? (t - (t / m * m)) + m : t + m;
	return (t >= m) ? t - (t / m * m) : t;
}
RC4::RC4( int bits)
{
   clave=RandomBits_ZZ(bits);
   srand(time(NULL));
   int r=0;
   for(int i=0;i<bits;i++,r++){
    if(r>=clave.size()){
        r=0;
    }
    s.push_back(conv<ZZ>(i));
    t.push_back(conv<ZZ>(rand()));
   }
   ZZ j(0);
   for(unsigned int i = 0; i<bits;i++){
       j = mod (conv<ZZ>( j + s[i] + t[i] ), conv<ZZ>(bits));
       ZZ tmp=s[i];
       s[i]=s[conv<int>(j)];
       s[conv<int>(j)]=tmp;

    }

   j=0;
   int i=0;
   vector<ZZ> men;
   for(int k=0;k<bits;k++){
        i=conv<int>(mod(conv<ZZ>(i+1),conv<ZZ>(bits)));
        j=mod (conv<ZZ>( j + s[i]), conv<ZZ>(bits));
        ZZ tmp=s[i];
        s[i]=s[conv<int>(j)];
        s[conv<int>(j)]=tmp;
        int t;
        t=conv<int>(mod(s[i]+s[conv<int>(j)],conv<ZZ>(bits)));
        men.push_back(s[t]);

   }
   t=men;
   this->bits=bits;
}
ZZ RC4::generador (int min, int max){
    int aleatorio;
    aleatorio=min;
    string num=to_string(aleatorio);

    for(int i=0;aleatorio>=min&&aleatorio<=max;i++){
          int r;
          r=conv<int>(t[i]);
          num+=to_string(r);
          aleatorio=stoi(num);
   }
   cout<<"Aleatorio: ";
   return conv<ZZ>(aleatorio);
}

RC4::~RC4()
{
    //dtor
}
