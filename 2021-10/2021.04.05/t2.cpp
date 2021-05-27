#include <iostream>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int ans = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < k-1; ++j){
            ans+=1;
        }
    }
    cout << ans;
}