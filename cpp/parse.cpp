#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

struct A{
	string s;
};

int doConvert(string s){
	switch(s){
		case "h":
	}
}

int main(){
	ifstream fileIn;
	fileIn.open("a.html");
	vector<string> inst = {"p","h","body","html"};
	while(!fileIn.eof()){
		string s;
		getline(fileIn, s);
		for(int i = 0; i < s.size(); ++i){
			if(s[i] == '<'){
				for (int j = 0; j < inst.size(); ++j){
					for(int k = 0; k < inst[j].size(); ++k){
						if(s[i+j] == inst[j][k])
							doConvert(inst[j]);
					}
				}
			}
		}
	}
	fileIn.close();

}

