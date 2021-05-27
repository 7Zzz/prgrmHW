#include <iostream>
#include <vector>

using namespace std;


void fbo(vector<int> &b, int n){
	for (int i = 0; i < n; ++i){
		b.push_back(0);
	}
}


int main(){
	int t,n,counter;
	vector<int> a;
	cin >> t;
	for(int i = 0; i < t; ++i){
		cin >> n;
		vector<int> b;
		fbo(b, n);
		for(int j = 0; j < n; ++j){
			int k;
			cin >> k;
			a.push_back(k);
		}

		counter = 0;
		for(int j = n-1; j >=0; --j){
			if(counter <= a[j])
				counter = a[j];
			//cout << "COUNTER: " << counter << endl;
			if(counter != 0)
				b[j] = 1;
			counter-=1;

		}
		//cout << "ANS: ";

		for(int j = 0; j < n; ++j)
			cout << b[j] << " ";
		cout << endl;
		b.clear();
		a.clear();
	}
}
