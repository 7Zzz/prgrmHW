#include <iostream>
#include <regex>
#include <string>
#include <fstream>


#define NUMBER_OF_TASKS 8


using namespace std;

struct to_json{
	int plase;
	string name;
	int task[NUMBER_OF_TASKS];
	int at_all;
	int diploma;
};


string parse_to_json(to_json json_str){
	string s = "	";
	s + "Plase: " + to_string(to_json.plase) + " Name: "+ to_json.name;
	for (int i = 0; i < NUMBER_OF_TASKS; ++i){
		s+= (" " + to_string(i) + " " + to_string(to_json.task[i]));
	}
	s + " Total: " + to_json.at_all + " Diploma: " + to_json.diploma;
	return s;
}


int main(){
	string start = " [";
	string stop = "] ";
	
	setlocale(LC_ALL, "rus");
	ifstream in ("res.html");
	ifstream out ("output.json");
	out << start;
	while(!in.eof){
		string s;
		getline(in, s);
		regex regexp("<td class=\"rankl\">([1-9][0-9]*)</td><td class=\"party\">([А-Яа-я ]+ \([1-9][0-9]*, [1-11] [а-я]+\))</td>");
		smatch m;
		to_json j;
		j.plase = 1;
		j.name ="asdad";
		
		regex_search(s, m, regexp);
		out << parse_to_json(j);
	}
	out << stop;
}
