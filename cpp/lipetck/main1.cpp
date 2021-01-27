#include <iostream>
#include <iterator>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int c;
    string s1, s2;
    scanf("%d\n", &c);
    scanf("%s\n", &s1);
    scanf("%s\n", &s2);
    for (int i = 0; i < c; ++i){
	if((int)s1.at(i) == (int)s2.at(i))
	    printf("0");
	else
	    printf("1");
    }
}
