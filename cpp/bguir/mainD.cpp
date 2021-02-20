#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



int main(){
	int size;
	cin >> size;
	vector<int> v;
	for (int i = 0; i < size; ++i){
		double num;
		cin >> num;
	   	v.push_back((int)(num*1000000));
	}
	sort(v.begin(),v.end());
	//for (int i = 0; i < size; ++i)  <----  *TEST*
	//	cout << v[i] << endl;
	int mid = (v[0]+v[size-1])/2;
	for(int i = 0; i < size-1; ++i){
		if(v[i] < mid && v[i+1] >= mid){
			mid = v[i+1];
			break;
		}
		//cout << mid << endl;
	}
	//cout << mid << endl;
	int E = 1;
	bool flag = false;
	for(int i = 0; i < size-1; ++i){
		if (v[i]+1 != v[i+1] && v[i+1] != mid && )
	}
	

}
