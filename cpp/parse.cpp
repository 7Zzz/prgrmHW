// basic file operations
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void myswitch(int p, ofstream &f){
	switch (p)
	{
	case 0:
		f << " # ";
		break;
	case 1:
		f << "**";
		break;
	case 2:
		f << "*";
		break;
	}
}
void myswitch(int p, ofstream &f, bool stat){
	switch (p)
	{
	case 0:
		if(stat)
			f << "<h1>";
		
		else
			f << "</h1>";
		break;
	case 1:
		if(stat)
			f << "<strong>";
		
		else
			f << "</strong>";
		break;
	case 2:
		if(stat)
			f << "<em>";
		
		else
			f << "</em>";
		break;
	}
}

void htmlToMarkdown(){
	ifstream html;
	ofstream md;
	html.open ("a.html");
	md.open ("b.markdown");
	vector<string> list = {"h1", "strong", "em"};
	while (!html.eof()){
		string input;
		getline(html,input);
	    //cout << input << endl;
		//cout << input.length() << endl;
		int waitForEnd = 0, pattern;
		for(int i = 0; i < input.length(); ++i){
			cout << input << endl;
			if(input[i] == '<' && input[i+1] != '/'){
				//cout << "	I = " << i << endl;
			 	waitForEnd = 1;
			 	for(int j = 0; j < list.size(); ++j){
			 		for(int k = 0; k < list[j].length(); ++k){
			 			if(input[i+1+k] == list[j][k]){
			 				pattern = j;
			 			}
			 		}
			 	}
				 //cout << "PATTERN: " << pattern << endl;
			// 	//cout << "before: " << input << endl;
			 	input.erase(i, list[pattern].length()+2);
			// 	//cout << "  after: " << input << endl;
			 	myswitch(pattern, md);
			 }
			 else if(input[i] == '<' && input[i+1] == '/'){
		 		waitForEnd = 0;
			 	input.erase(i, list[pattern].length()+3);
			 	myswitch(pattern, md);
			 }
			md << input[i];
		}
		
		md << endl;
	}
	html.close();
	md.close();
}
void markdownToHtml(){
	ofstream html;
	ifstream md;
	html.open ("a.html");
	md.open ("b.markdown");
	vector<string> list = {"#", "**", "*"};
	while (!html.eof()){
		string input;
		getline(md,input);
	    //cout << input << endl;
		//cout << input.length() << endl;
		int  pattern;
		bool waitForEnd = 0;
		for(int i = 0; i < input.length(); ++i){
			cout << input << endl;
			if(!waitForEnd){
				for(int j = 0; j < list.size(); ++j){
					for(int k = 0; k < list[j].length(); ++k){
						if(input[i+k] == list[j][k]){
							pattern = j;
							waitForEnd = 1;
						}
					}
				}
				if(waitForEnd){
					input.erase(i+1, list[pattern].length()+1);
			 		myswitch(pattern, html, waitForEnd);
				}
			}
			else{
				for(int j = 0; j < list.size(); ++j){
					for(int k = 0; k < list[j].length(); ++k){
						if(input[i+k] == list[j][k]){
							pattern = j;
							waitForEnd = 0;
						}
					}
				}
				if(!waitForEnd){
					input.erase(i+1, list[pattern].length()+1);
					myswitch(pattern, html, waitForEnd);
				}
			}
			html << input[i];
		}
		
		html << endl;
	}
	html.close();
	md.close();
}

int main () {
	htmlToMarkdown();
	markdownToHtml();
	return 0;
}