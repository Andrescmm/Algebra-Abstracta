#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include "Header.h"
using namespace std;


vector<int> criba_eratostenes(int n)
{
    vector<int> criba;
    int primo;
    
    for (int i = 2; i <= n; i++)
        criba.push_back(i);
        
    
    
    if (n == 2 || n == 3)
        return criba;
        
    

    vector<int>::iterator it = criba.begin();
    
    primo = *it;
do
    {
        vector<int>::iterator it2 = it + 1;
        
        for(; it2 <= criba.end(); it2++)
            //if(*it2%primo==0)
            if((mod(*it2,primo))==0)
                criba.erase(it2);
        
        it++;
        primo = *it;

    } while (pow(primo, 2) < n);
    
    return criba;
}


void Imprimir(vector<int> n){
    for(int i =0;i<n.size();i++){
        cout<<n[i]<<",";
    }
    cout<<endl;
}




int main() {
    int  n;
    vector<int> num_primos;
    
    cout << "Numero maximo de primos: ";
    cin >> n;
    
    num_primos = criba_eratostenes(n);
    
    Imprimir(num_primos);

    
    
    return 0;
}
