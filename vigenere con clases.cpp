#include<iostream>
#include<string>
#include<ctime>
#include<cmath>
using namespace std ;


class Vigeneree{
private:
      string alfa="abcdefghijklmnopqrstuvwxyz0123456789 ";
    
public:
    string mensaje="";
    string clave="";
   //constructor vacio
    Vigeneree(){}
    
    Vigeneree(string mensaje){
        this->mensaje=mensaje;
    }
    
    Vigeneree(string mensaje,string clave){
        this->mensaje=mensaje;
        this->clave=clave;
    
    }
    
    
    void Encriptado(){
        srand(time(NULL));
        long aleatorio, DESDE=0, HASTA=alfa.length();
        
        
        for(int i=0;i<mensaje.size();i++){
            aleatorio = rand()%(HASTA-DESDE+1)+DESDE;
            clave.push_back(alfa.at(aleatorio));
        }
        cout<<clave<<endl;
        
        for(int i=0;i<mensaje.size();i++){
            long m =alfa.find(mensaje.at(i));
            long c=alfa.find(clave.at(i));
            int sumat=(m+c)%37;
            mensaje.at(i)=alfa.at(sumat);
        }
        cout<<mensaje<<endl;
    }
    
    
    
    
    void Desencriptado(){
        long large=mensaje.size();
        for (int i=0;i<large;i++){
            long x=alfa.find(mensaje.at(i));
            long y=alfa.find(clave.at(i));
            int resta=(x-y)%37;
            if(resta<0){
                resta=(resta+37)%37;
            }
            mensaje.at(i)=alfa.at(resta);
        }
        
        cout<<mensaje<<endl;
    }

};



int main (){
    string code="";
    string mensaje="";
    string clave="";
    cout<<"Ingresa un mensaje"<<endl;
    getline(cin,code);
    Vigeneree a (code);
    
    a.Encriptado();
    cout<<"Ingrese el mensaje y la clave"<<endl;
    getline(cin,mensaje);
    getline(cin,clave);
    
    Vigeneree b(mensaje,clave);
    b.Desencriptado();
    
    
    
    return 0;
}
