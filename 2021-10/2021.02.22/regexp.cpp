#include <iostream>
#include <string>
#include <regex>

using namespace std;


int main1() 
{ 
	string mystr = "12 21 22"; 
	regex regexp("[2-7][02468]"); 
	smatch m; 
	regex_search(mystr, m, regexp); 
	                       
	cout<<"pattern:";
	for (auto x : m) 
		cout << x << " "; 
return 0; 
}

int main() 
{ 
	string mystr = "32 0.1"; 
	regex regexp("\\d*\\.+\\d+"); 
	smatch m; 
	regex_search(mystr, m, regexp); 
	                       
	cout<<"pattern:";
	for (auto x : m) 
		cout << x << " "; 
return 0; 
}

int main3() 
{ 
	string mystr = "12 321 123 123441 52 5233 123"; 
	regex regexp("[2-7][02468]"); 
	smatch m; 
	regex_search(mystr, m, regexp); 
	                       
	cout<<"pattern:";
	for (auto x : m) 
		cout << x << " "; 
return 0; 
}

int main4() 
{ 
	string mystr = "12 321 123 123441 52 5233 123"; 
	regex regexp("[2-7][02468]"); 
	smatch m; 
	regex_search(mystr, m, regexp); 
	                       
	cout<<"pattern:";
	for (auto x : m) 
		cout << x << " "; 
return 0; 
}

int main5() 
{ 
	string mystr = "12 321 123 123441 52 5233 123"; 
	regex regexp("[2-7][02468]"); 
	smatch m; 
	regex_search(mystr, m, regexp); 
	                       
	cout<<"pattern:";
	for (auto x : m) 
		cout << x << " "; 
return 0;

}

