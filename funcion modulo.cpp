#include<iostream>
#include <string>

using namespace std;

int mod(int x, int y){
    if(x>=0)return x-(x/y)*y;
    return x-((x/y)-1)*y;
}
