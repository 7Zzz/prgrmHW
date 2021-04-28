#include <iostream>
#include <vector>

using namespace std;



int main(){
	int t,n;
	vector<int> a;
	cin >> t;
	for(int i = 0; i < t; ++i){
		cin >> n;
		for(int j = 0; j < n; ++j){
			int k;
			cin >> k;
			a.push_back(k);
		}
		int num = n;
		for(int j = n-1; j >= 0; --j)	//0//3//0//0//1//3 //n=6
			if(a[j] > 0){
				num-=a[j];
				if(j-num>0)
					for(int k = j; k >= j-num; --k)
						a[k] = 1;
				else
					for(int k = j; k >= 0; --k)
						a[k] = 1;
			}
			else
				a[j] = 0;
		
		for(int j = 0; j < n; ++j){
			cout << a[j] << " ";
		}
		cout << endl;
	}
}
