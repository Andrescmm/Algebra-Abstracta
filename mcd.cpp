#include<iostream>
#include <string>
using namespace std;

int mcd(int a,int b){
    int r1=a;
    int r2=b;
    while(r2>0){
        int q=r1/r2;
        int r=r1-q*r2;
        r1=r2;
        r2=r;
    }
    return r1;
}
