#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void find(){
    int n, m; 
    cin >> n >> m;
    vector<vector<char>> v;
    for(int i = 0; i < n; ++i){
        vector<char> v1;
        for(int j = 0; j < m; ++j){
            char c; cin >> c;
            v1.push_back(c);
        }
        v.push_back(v1);
    }
    vector<vector<int>> v2;
    for(int i = 0; i < n; ++i){
        vector<int> z;
        v2.push_back(z);
        for(int j = 0; j < m; ++j)
            v2[i].push_back((j == 0) ? ((v[i][j] == '*') ? 1 : 0) : (v2[i][j-1] +((v[i][j] == '*') ? 1 : 0)));
        int ans = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(v[i][j] == '.')
                    continue;
                for(int k = 0; k < min(n-i, min(m-j, j+1)); ++k){
                    cout << j-k-1 << endl;
                    if((j-k-1 < 0)){
                        if(v2[i+k][j+k] != k){
                            break;
                        }
                    }
                    else{ 
                        if (v2[i+k][j+k] - v2[i+k][j-k-1] != k)
                            break;
                    }


                    // if((v2[i+k][j+k] - ((j-k-1 < 0) ? 0 : v2[i+k][j-k-1])) != k)
                    //     break;
                    ans+=1;
                }
            }
        }
        cout << ans << endl;

    }
}
    
int main(){
    int n; cin >> n;
    while(n){
        find();
        n-=1;
    }
}