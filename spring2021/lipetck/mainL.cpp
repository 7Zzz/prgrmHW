#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
void compare (int b, int c);
void rec (int a);

int main(){
	int a,b;
	cin >> a >> b;
	vector<int> v(a);
	int min, mid, max;


	cout << "? " << a/2 << endl;
	cin >> mid;
	compare(b, mid);
	cout << "? " << 0 << endl;
	cin >> min;
	compare(b, min);
	cout << "? " << a << endl;
	cin >> max;
	compare(b, max);

}

void compare (int b, int c){
	if (b==c)
		cout << "! " << b << endl;
}

void rec (int min, int num, int max){

	if (min <= num && max <= num){
		compare(min, num); compare(max, num);

	} else if (min < mid){
		if (min < b <= mid){
		
		} else {
		
		}
	} else if (max < mid){
		
	}

	}
}
