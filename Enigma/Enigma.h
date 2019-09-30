#include <iostream>
#include <string>
using namespace std;

class Enigma {
private:
    string clave;
public:
    string alfa1 ="abcdefghijklmnopqrstuvywxz ";
    string alfa2 ="abcdefghijklmnopqrstuvywxz ";
    string alfa3 ="abcdefghijklmnopqrstuvywxz ";
   // string rot1= "defglmnohijtuvywxz abckpqrs";
    //string rot2= "bmnop qcefuvywxzagjklrsthid";
   // string rot3= "pqrsznoabcdekl mvywxfgtuhij";
    string rot1= "ndjvuayfhistzob egkrxqpmwlc";
    string rot2= "oviqxnwafhkrlbdcuysgme zptj";
    string rot3= "bqhemopnafsgtdvjxwkyzucl ri";

    Enigma(string clave );
    Enigma(string clave,string rot1, string rot2,string rot3);
    string cifrado(string mensaje);
    string descifrado (string mensaje);

};


#endif //ENIGMA2_0_ENIGMA_H

