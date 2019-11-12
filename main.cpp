#include <iostream>
#include <string.h>
#include<NTL/ZZ.h>
#include "RSA.h"

using namespace std;
using namespace NTL;



int main()
{
    int bits;
    cout<<"How many bits= ";
    cin>>bits;
    RSA a(bits);
    a.cifrar("oli");


    return 0;
}
