#include <iostream>
#include "Escitala.h"
#include <string>
#include <fstream>

using namespace std;

int main()
{

    string text;
    ifstream entrada("mensaje.txt");
    getline(entrada,text);
    int row,column;
    cout<<"Ingresar la cantidad de filas y columnas"<<endl;
    int filas;
    cin>>filas;
    int columnas;
    cin>>columnas;
    Escitala a(filas,columnas);
    string message= a.Encriptado(text);
    cout<<message<<endl;
    /*cout<<"Ingresar filas y columnas "<<endl;
    cin>>row;
    cin>>column;*/
    Escitala b(filas,columnas);
    b.Descifrado(message);

    return 0;
}
