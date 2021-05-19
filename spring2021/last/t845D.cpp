#include <iostream>
#include <vector>

using namespace std;

void bynull(vector<int> v){
	for(int i = 0; i< v.size(); ++i)
		v[i] = 0;
}

int f(int s, vector<int>slim){
	int k = 0;
	for(int i = 0; i < slim.size();++i)
		if(s > slim[i])
			k+=1;
	return k;
}

int main(){
	vector<int> spd;
	vector<int> spdlim;
	int canOb = 1;
	int del; //ans
	int n,k;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> k;
		switch(k){
		case 1:
			{
			int s;
			cin >> s;
			spd.push_back(s);
			if(i!=0)
				del-=f(s, spdlim);
			break;
			}
		case 2:
			{
			if(canOb <= 1)
				break;
			else del+=1;
			break;
			}
		case 3:
			{
			int s;
			cin >> s;
			spdlim.push_back(s);

			break;
			}
		case 4:
			{
			canOb+=1;
			break;
			}
		case 5:
			{
			bynull(spdlim);
			break;
			}
		case 6:
			{
			canOb-=1;
			break;
			}
		}
	}
	cout << del << endl;
return 0;
}
