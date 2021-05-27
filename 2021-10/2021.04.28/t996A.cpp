#include<iostream>
#include <vector>
using namespace std;



int main(){
    int cash;
    cin >> cash;
    int counter = 0;
    while(cash != 0){
        if(cash >= 100){
            counter+=1;
            cash-=100;
            continue;
        }
        if(cash >=20){
            counter+=1;
            cash-=20;
            continue;
        }
        if(cash >= 10){
            counter+=1;
            cash-=10;
            continue;
        }
        if(cash>=5){
            counter+=1;
            cash-=5;
            continue;
        }
                    
        if(cash>=1){
            counter+=1;
            cash-=1;
            continue;
        }    
        
    }
    cout << counter;



}