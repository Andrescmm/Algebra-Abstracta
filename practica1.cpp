\\Andres Cusirramos Marquez Mares      Algebra Abstracta
#include<iostream>
#include <string>

using namespace std;

int main(){
    string albe={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9',' '};
    
    //cout<<albe.size()<<endl;
    
    string mensaje;
    cout<<"Ingrese un mensaje: "<<endl;
    getline(cin,mensaje);
    //cout<<mensaje<<endl;
    cout<<"Ingresar "<<mensaje.size()<<" numeros diferentes"<<endl;
    string pos[36];
    int a;
    for(int i=0;i<mensaje.size();i++){
        cin>>a;
        pos[i]=to_string(a);
        cout<<pos[i]<<endl;
    }
    
