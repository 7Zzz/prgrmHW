#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a;
    for (int i = 0; i < n; ++i){
        int num; cin >> num;
        a.push_back(num);
    }
    int max=1;
    int tmax=1;
    int imax=0;
    for(int i = 1; i < n; i++){
        if (a[i] <= a[i-1]){
            if (tmax > max){
                max = tmax;
                imax = i - max;
                tmax = 1;
            }
        }
        else
            tmax+=1;
        
    }
    if (tmax > max)
        max = tmax;
    for (int i = imax; i < imax + max; i++)
        cout<<a[i]<<" ";
}