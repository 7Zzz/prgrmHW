#include <iostream>
#include <string>

int main(){
	std::ios::sync_with_stdio(false);

	int m, n;
	std::string s;
	std::cin >> m >> n >> s;
	int *ptrarray = new int [n];
	for (int i = 0; i < n; ++i)
		std::cin >> ptrarray[i];
	int counter = 0;
	int max = 0;
	for (int i = 1; i < m-1; ++i){
		if (s[i] == '1'){
			counter += 1;
			if (counter > max)
				max = counter;
		}
		else
			counter = 0;
	}
	for (int i = 0; i < n; ++i){
		if (ptrarray[i] > max)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	delete [] ptrarray;
}
