#ifndef UNTITLED_FUNCIONES_MATEMATICAS_H
#define UNTITLED_FUNCIONES_MATEMATICAS_H
#include<iostream>
#include <cmath>
using namespace std;

int funcionM (int x, int y){
    if(x>=0)return x-(x/y)*y;
    return x-((x/y)-1)*y;
}
#endif //UNTITLED_FUNCIONES_MATEMATICAS_H
