#include <iostream>
#include <string>

using namespace std;


void rec(int n, int ob, int cb, string ans, int& answer){
    if(ob + cb == 2*n){
        answer+=1;
        cout << ans << endl;
    }
    if(ob < n)
        rec(n, ob+1, cb, ans+"(", answer);
    if(ob > cb)
        rec(n, ob, cb+1, ans+")", answer);

}

int main(){
    int n; cin >> n;
    int answer = 0;
    rec(n, 0, 0, "", answer);
    cout << answer;
}