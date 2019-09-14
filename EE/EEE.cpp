#include <iostream>
#include<string>
using namespace std;
int funcionM (int x, int y){
    if(x>=0)return x-(x/y)*y;
    return x-((x/y)-1)*y;
}

int mcd(int a,int b){
    int r1=a;
    int r2=b;
    while(r2>0){
        int q=r1/r2;
        int r=r1-q*r2;
        r1=r2;
        r2=r;
    }
    cout<<"El Maximo Comun Divisor es: "<<r1<<endl;
    return r1;
}

int EuclidesExtendido(int a , int b){
    int r1=a;
    int r2=b;
    int s1=1;
    int s2 =0;
    int t1=0;
    int t2=1;
    while(r2>0){
        int q=r1/r2;
        int r=r1-q*r2;
        r1=r2;
        r2=r;

        int s=s1-q*s2;
        s1=s2;
        s2=s;

        int t=t1-q*t2;
        t1=t2;
        t2=t;
    }
    cout<<"El valor de x:"<<s1<<endl;
    cout<<"El valor de y: "<<t1<<endl;
    cout<<r1<<"="<<"("<<s1<<")*"<<a<<"+"<<"("<<t1<<")*"<<b<<endl;




}
