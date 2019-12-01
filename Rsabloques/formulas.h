#ifndef FORMULAS_H_INCLUDED
#define FORMULAS_H_INCLUDED


#include <iostream>
#include<string>
#include <ctime>
#include<vector>
#include <cstdlib>
#include<sstream>
#include <NTL/ZZ.h>


using namespace std;
using namespace NTL;

ZZ mod(ZZ x, ZZ y){
    if(x>=0)return x-(x/y)*y;
    return x-((x/y)-1)*y;
}

/*int generadorAleatorios(ZZ maximo) {
	srand(time(NULL));
	ZZ aleatorio, DESDE = 0, HASTA = maximo;
	aleatorio = mod(rand(), HASTA);
	return aleatorio;
}*/
/*string generadorMensajeAleatorio(int tam, string alf, ZZ alfabetoTam) {
	string mensajeAleatorio;
	for (int i = 0; i < tam; i++) {
		ZZ aleatorio = generadorAleatorios(alfabetoTam-1);
		//cout<<"aleatorio"<< aleatorio<<endl;
		mensajeAleatorio+= alf.at(aleatorio);
		alf.erase(aleatorio, 1);
	}
	return mensajeAleatorio;
}*/
ZZ euclides(ZZ a, ZZ b) {
    ZZ r1 = a;
	ZZ r2 = b;
	while (r2 > 0) {
		ZZ q = r1 / r2;
		ZZ r = r1 - q * r2;
		r1 = r2;
		r2 = r;
	}
	//cout<<"El Maximo Comun Divisor es: "<<r1<<endl;
	return r1;
}

/*vector<ZZ> EuclidesExtendido(ZZ a,ZZ b) {
	ZZ r1 = a;
	ZZ r2 = b;
	ZZ s1 = 1;
	ZZ s2 = 0;
    ZZ t1 = 0;
	ZZ t2 = 1;
	while (r2 > 0) {
		ZZ q = r1 / r2;
		ZZ r = r1 - q * r2;
		r1 = r2;
		r2 = r;

		ZZ s = s1 - q * s2;
		s1 = s2;
		s2 = s;

		ZZ t = t1 - q * t2;
		t1 = t2;
		t2 = t;
	}
	vector<ZZ> ee = { s1,t1,r1 };
	/*cout<<"El valor de x:"<<s1<<endl;
	cout<<"El valor de y: "<<t1<<endl;
	cout<<r1<<"="<<"("<<s1<<")*"<<a<<"+"<<"("<<t1<<")*"<<b<<endl;
	return ee;
}*/
/*ZZ inversoMod(ZZ a, ZZ m) {
	vector<ZZ> tm = EuclidesExtendido(a, m);
	ZZ g = tm[2];
	ZZ x = tm[0];
	ZZ y = tm[1];
	if (g != 1) {
		cout << "No existe el inverso modular" << endl;
		return 0;
	}
	else {
		ZZ res = mod((mod(x, m) + m), m);
		//cout << "la inversa es: " << res << endl;
		return res;
	}
}*/




/*vector<ZZ> CribaDeEratostenes(ZZ n) {
	vector<bool> primos;
	vector<ZZ> nPrimos;
	for (int i = 0; i <= n; i++) {
		primos.push_back(true);
	}
	primos[0] = false;
	primos[1] = false;
	for (int i = 2; i * i <= n; i++) {
		if (primos[i] == true) {
			for (int j = i * i; j <= n; j += i)
				primos[j] = false;
		}
	}
	//cout << " Los primos menores a " << n << " son : [";
	for (ZZ p = 0; p <= n; p++) {
		if (primos[p]) {
			nPrimos.push_back(p);
			//  cout << p << " , ";
		  //  cout << nPrimos[]<< " , ";

		}
		//cout << nPrimos[p]<< " , ";
	}

	/*for (int i = 0; i < nPrimos.size(); i++) {
		cout << nPrimos[i] << " , ";
	}
	cout << " ]" << endl;*/
	//return nPrimos;
//}


ZZ getInverse(ZZ a, ZZ m) {
  ZZ tmp(m);
  ZZ s0(1), s1;
  while (m > 0) {
    ZZ q, s, r;
    q = a / m;
    r = a - (m * q);
    s = s0 - s1 * q;
    a = m;
    m = r;
    s0 = s1;
    s1 = s;
  }
  ZZ res = mod(s0, tmp);
  return res;
}

/*ZZ TeoremaChino(ZZ num){
ZZ numP, numN, Xp,Xq ,Cp, Cq, resultado;

numP=mod(num,p);
numq=mod(num,q);

Xp=ExponenciacionModular(num,dp,p);
Xq=ExponenciacionModular(num,dq,q);

return mod(mod(Xp*pCp, n)*mod(Xp*qCp,n),n);

}
*/
vector<int> criba_eratostenes(int n)
{
    vector<int> criba;
    int primo;

    for (int i = 2; i <= n; i++)
        criba.push_back(i);



    if (n == 2 || n == 3)
        return criba;



    vector<int>::iterator it = criba.begin();

    primo = *it;
do
    {
        vector<int>::iterator it2 = it + 1;

        for(; it2 <= criba.end(); it2++)
            if(*it2%primo==0)
            //if((mod(*it2,primo))==0)
                criba.erase(it2);

        it++;
        primo = *it;

    } while (pow(primo, 2) < n);

    return criba;
}




#endif // FORMULAS_H_INCLUDED
