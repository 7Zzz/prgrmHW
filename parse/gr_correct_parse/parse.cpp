#include <vector>
#include <string>

using namespace std;

struct Alt{
	string s;
};

struct Concat{
	string s;
	Alt a;
};


int main(){

	//ab|c
	Concat ex;
	Alt subex;

	subex.s = "c";
	ex.s="ab";

	ex.a = subex;

	

}
