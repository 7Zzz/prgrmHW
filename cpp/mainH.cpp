#include <iostream>
#include <vector>
#include <algorithm>    
#include <stdlib.h>

#include <ctime>
using namespace std;

int main (){
    clock_t start;
    double duration;
    int a = 300000;
    long min = 1000000001;
    int in;
    //cin >> a;
    vector<pair<int,long>> v;

    for (int y = 0; y < 300000; ++y){
        v.push_back({y,(rand() % 1000000000)});
    }
    start = clock();
    // for (int i = 0; i < a; ++i){
    //     cin >> in; 
    //     v.push_back({i,in});
    // }

    
    //for (int i = 0; i < a; ++i){
        int pos;
        for (int j = 0; j < a; ++j){
    //         //out << "MIN: " << min << " j = "<< j <<" mv[j] = " << v[j].second << endl;
            if (min > v[j].second){
                min = v[j].second;
                pos = j;
            }
        }
        min = 1000000001;
        //cout << v[pos].first+1 << " ";
        v.erase(v.begin()+pos);
   // }
    
    duration = (clock() - start ) / (double) CLOCKS_PER_SEC;

    cout << endl <<"TIME: "<< duration <<'\n';
    
    return 0;
}