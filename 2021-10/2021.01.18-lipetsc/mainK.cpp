#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long fact (int n){
	switch (n){
		case 1:
			return 1;
		default:
			return n * fact(n-1);
	}
}

int main (){
	int a, b;
	cin >> a >> b;
	cout << int((fact(a)*fact(b))/fact(a-b)) << endl;
	cout << pow(a-b, b) << endl;
	cout << (int((fact(a)*fact(b))/fact(a-b) * pow(a-b, b)) % 998244353) << endl;

}
