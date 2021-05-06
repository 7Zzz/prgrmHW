#include <iostream>

using namespace std;

int fib (int n, int n_1,int n_2){
	if (n == 0) return n_1;
	else return fib(n-1, n_2, n_1+n_2); //high speed
}

int fib2 (int n){
	if (n == 0 || n == 1) return 1; //low speed
	else return fib2(n-1)+fib2(n-2);
}

	

int main(){
	cout << fib(45, 1, 1) << endl;
}
