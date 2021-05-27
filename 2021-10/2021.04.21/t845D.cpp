#include <iostream>
#include <vector>

using namespace std;

// void bynull(vector<int> v){
// 	for(int i = 0; i< v.size(); ++i)
// 		v[i] = 0;
// }

// int f(int s, vector<int>slim){
// 	int k = 0;
// 	for(int i = 0; i < slim.size();++i)
// 		if(s > slim[i])
// 			k+=1;
// 	return k;
// }

int main(){
	int n,k;
	cin >> n;
	vector<int> spdlim;
	int ob = 0;
	int ans = 0; //ans
	int speed;
	int asd;
	cin >> asd;
	cin >> speed;
	for(int i = 0; i < n-1; ++i){
		cin >> k;
		switch(k){
		case 1:
			{
			int s;
			cin >> s;
			speed = s;
			for(int i = 0; i < spdlim.size(); ++i)
				if(spdlim[i] < speed){
					ans+=1;
					spdlim.erase(spdlim.begin() + i);
				}
			break;
			}
		case 2:
			{
			ans += ob;
			ob = 0;
			break;
			}
		case 3:
			{
			int s;
			cin >> s;
			if(speed > s)
				ans+=1;
			else 
				spdlim.push_back(s);
			break;
			}
		case 4:
			{
			ob=0;
			break;
			}
		case 5:
			{
			spdlim.clear();
			break;
			}
		case 6:
			{
			ob+=1;
			break;
			}
		}
	}
	cout << ans << endl;
return 0;
}
