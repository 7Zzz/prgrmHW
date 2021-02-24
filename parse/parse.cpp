#include <iostream>
#include <regex>
#include <string>
#include <fstream>


using namespace std;

int main(){
	setlocale(LC_ALL, "rus");
	ifstream in ("res.html");
	ifstream out ("output.json");

	while(!in.eof){
		string s;
		getline(in, s);
		regex regexp("")
	}
}
