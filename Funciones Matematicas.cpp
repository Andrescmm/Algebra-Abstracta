#include<iostream>
#include <string>
#include <cmath>
#include <vector>
#include<utility>
using namespace std;

int mod(int x, int y){
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
    return r1;
}

vector <int> EE(int a , int b){
    vector<int> resultado;
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
    while(r2>0){
        int q=r1/r2;
        int r=r1-q*r2;
        r1=r2;
        r2=r;
    }
    if(s1<0){
        s1=s1*-1;
    }
    if(t1<0){
        t1=t1*-1;
    }
    
    resultado.push_back(s1);
    resultado.push_back(t1);
    resultado.push_back(r1);

    return resultado;

}

int inversa(int a , int m){
     a=mod(a,m);
    //a = a%m;
    for (int x=1; x<m; x++){
        if((mod(a*x),m)==1)
        //if ((a*x) % m == 1){
            return x;}
    }

}
