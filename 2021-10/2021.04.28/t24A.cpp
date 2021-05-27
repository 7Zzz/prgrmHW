#include<iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

struct t{
    int a,b,c;
};

int rec(int b, int x, int y, vector<t> &l){
    if(!l.empty()){
        
        for(int i = 0; i < l.size();){
            int p = l[i].a;
            int q = l[i].b;
            int t = l[i].c;
            
            if(p == b){
                l.erase(l.begin() + i);
                return rec(q, x+t, y, l);
            }
            else if(q == b){
                l.erase(l.begin() + i);
                return rec(p, x, y+t, l);
            }
            else
                ++i;
        }
    }
    else{
        //cout << " l size: "<< l.size() << endl;
        // cout << "{" << x << "," << y << "}" << endl;
         int j =  min(x, y);
        return j;
    }
}

int main(){
    int n;
    cin >> n;
    vector<t> l;
    for(int i = 0; i < n; ++i){
        int s,d,f;
        cin >> s >> d >> f;
        t k = {s,d,f};
        l.push_back(k);
    }
    int m = 0;
    for(int i = 0;i < n; ++i)
        m+=l[i].c;
    //cout << " l size: "<<l.size() << endl;
    int g = l[0].b;
    int h = l[0].c;
    l.erase(l.begin());

    int y = rec(g, h, 0, l);
    cout << y/*min(y, m-y);*/;
    return 0;
}