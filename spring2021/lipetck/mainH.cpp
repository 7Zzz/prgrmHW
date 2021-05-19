#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


struct Interval{
	int f,s;
};

bool srt(Interval i1, Interval i2){
	return (i1.s < i2.s);
}

int main(){
	int a;
	cin >> a;
	vector<Interval> v;
	for (int i = 0; i < a; ++i){
		int k;
		cin >> k;
		v.push_back({i, k});
	}
	sort(v.begin(), v.end(), srt);
	for (int i = 0; i < a; ++i){
		cout << v[i].f+1 << " ";
	}

}
