#include <iostream>
#include <vector>

using namespace std;


vector<int> nv(){
	vector<int> v;


}

int main(){
	int n;
	vector<int> v;
	cin >> n;
	for(int i = 0; i < n; ++i){
		int a; cin >> a;
		v.pushback(a);
	}
	sort(v.begin(), v.end());



}
