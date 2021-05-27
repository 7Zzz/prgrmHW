#include<iostream>
#include <vector>
#include <string>
using namespace std;


#define RS 4
#define PS 5
#define SS 8


int main(){
    string f,m,s;
    cin >> f >> m >>s;
    if(f.length() == PS && m.length() == s.length() && s.length() == RS){
        cout << "F";
    }
    else if(m.length() == PS && s.length() == f.length() && s.length() == RS){
        cout << "M";
    }
    else if(s.length() == PS && m.length() == f.length() && m.length() == RS){
        cout << "S";
    }
    else if(f.length() == RS && m.length() == s.length() && s.length() == SS){
        cout << "F";
    }
    else if(m.length() == RS && s.length() == f.length() && s.length() == SS){
        cout << "M";
    }
    else if(s.length() == RS && m.length() == f.length() && m.length() == SS){
        cout << "S";
    }
    else if(f.length() == SS && m.length() == s.length() && s.length() == PS){
        cout << "F";
    }
    else if(m.length() == SS && s.length() == f.length() && s.length() == PS){
        cout << "M";
    }
    else if(s.length() == SS && m.length() == f.length() && m.length() == PS){
        cout << "S";
    }
    else
        cout << "?";
}