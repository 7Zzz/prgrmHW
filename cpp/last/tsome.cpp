#include <iostream>
#include <vector>

using namespace std;



int f(int value){
	vector<int> v;
//	int c = 0;
	while(value){
    	int curr = value % 10;
   		value /= 10;
		
		v.push_back({curr+1});
//		++c;
	}
	int num = 0;
	for(int i = v.size()-1; i >=0 ; --i){
		if(v[i]==10)
			num = num*100+v[i];
		else
			num = num*10+v[i];
	}
	return num;
}

int rec(int num, int n){
	if(n == 0)
		return rec(f(num), n-1);
	else
		--n;
}
	

int main(){
	int n,a,b;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> a >>  b;
		int count = 0;
		int numb = (rec(a,b) % 1000000007);
		while(numb){
				numb/=10;
				count++;
		}
		cout << count << endl;
	}
}
