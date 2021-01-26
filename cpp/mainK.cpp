#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int rec(int n){
    if(n > 1)
        return n * rec(n - 1);
    else
        return 1;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << (static_cast<int>(pow(rec(a)/rec(a-b),2)*b) % 998244353);

}