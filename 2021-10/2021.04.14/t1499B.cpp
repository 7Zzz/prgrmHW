#include <iostream>
#include <string>

using namespace std;


int main() {
  int n; cin >> n;
  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    int done = s.find("11");
    int dzer = s.rfind("00");
    cout << (done != -1 && dzer != -1 && done < dzer ? "NO" : "YES") << endl;
  }
}


