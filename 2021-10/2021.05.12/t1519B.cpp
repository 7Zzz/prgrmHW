#include <iostream>
#include <vector>

using namespace std;



int main(){
	int as;cin >> as;
	for(int i = 0; i < as; ++i){
		int n,m,k;
		cin >> n >> m >> k;
		if(n*m-1 == k)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	
	}

}