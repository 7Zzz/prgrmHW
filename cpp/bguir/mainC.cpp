#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

struct pair3d{
	int min, max, num;
	char name;
};

int main(){
	int m,n;
	cin >> m >> n;
	vector<pair3d> v(n);
	string s;
	cin >> s;
	for (int i = 0; i < n; ++i){
		cin >> v[i].name >> v[i].min >> v[i].max;
		v[i].num = 0;
		if(v[i].name == s[0])
			v[i].num = 1;
	}
	for (int i = 0; i < m; ++i){
		s.erase (remove(s.begin(), s.end(), '('), s.end());
		s.erase (remove(s.begin(), s.end(), ')'), s.end());
	}
	for(int i = 1; i < m-1; ++i){
		if (s[i] == '+'){
			for(int j = 0; j < n; ++j){
				if(v[j].name == s[i+1])
					v[j].num += 1;
			}
		}
		else if (s[i] == '-'){
			for(int j = 0; j < n; ++j){
				if(v[j].name == s[i+1])
					v[j].num -= 1;
			}
		}
	}
	cout << s << endl;
	int ans = 0;
	for (int i = 0; i < n; ++i){
		if(v[i].num <= 0){
			ans -= v[i].min*v[i].num;
			cout << "ANSWER = " << ans << " plus " << v[i].min << endl;
		}
		else{
			ans += v[i].max*v[i].num;
			cout << "ANSWER = " << ans << " plus " << v[i].max << endl;

		}
	}
	cout << ans;
}
