#include <iostream>
#include <string>
#include <vector>


using namespace std;

struct myStr{
    int min, max, count;
    char name;
};

struct myPair{
    int value;
    bool flag = false;
};

void changePltoMi (string &str, int first, int second){
    for (int i = first; i < second; ++i){
        if(str[i] == '-')
            str[i] = '+';
        else if (str[i] == '+')
            str[i] = '-';
    }
}

int cap (int n){
	int i = 0;
	for (; n ; n/= 10)
		++i;
	return i;
}



int main (){
    int m, n;
    string s;
    vector<myStr> v;
    vector<myPair> v1;
    int depth = 512;

    cin >> m >> n >> s;
    for (int i = 0; i < m; ++i){
        myPair mp = {.value=0,.flag=false};
        v1.push_back(mp);
    }
	for (int i = 0; i < n; ++i){
		myStr ms = {.min=0,1,0, .name='_'};
		v.push_back(ms);
	}
    for (int i = 0; i < n; ++i)
        cin >> v[i].name >> v[i].min >> v[i].max;


    for (int i = 0; i < m; ++i){
        if(s[i] == '('){
            depth += 1;
            if(s[i-1] == '-'){
                v1[i].value = depth;
				if(s[i+1] == '-')
	           		s[i-1] = '+'; 
				else
					s[i-1] = '-';
	    	}
            s.erase(i,1);
            i-=1;
            m-=1;
        }else if (s[i] == ')'){
            
            //cout << "I = " <<i << endl;
            for(int j = 0; j < i; ++j){
                //cout << "   v1[j] = " << v1[j].value << " depth = " << depth << endl;
                if (v1[j].value == depth && v1[j].flag == false){
                    changePltoMi(s, j+1, i-1);
                    v1[j].flag = true;
                }
            }
            s.erase(i,1);
            i-=1;
            m-=1;
            depth-=1;
        }
    }
    //cout << s << endl;
    for (int i = 0; i < n; ++i)
        if (s[0] == v[i].name)
            v[i].count+=1;
    for (int i = 1; i < m; i+=2){
        for (int j = 0; j < n; ++j)
            if (s[i+1] == v[j].name && s[i] == '+')
                v[j].count+=1;
            else if (s[i+1] == v[j].name && s[i] == '-')
                v[j].count-=1;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
        if (v[i].count >= 0){
//            cout << "Ans = " << ans << " + " <<  v[i].max*v[i].count << endl;
            ans+=v[i].max*v[i].count;
        }
        else{
//            cout << "Ans = " << ans << " + " <<  v[i].min*v[i].count << endl;
            ans+=v[i].min*v[i].count;
        }
	for (int i = 0; i < n; ++i)
		if(s[0] == v[i].name){
			s.erase(0,1);
			m-=1;
		}
	for (int i = 1; i < m; ++i){
		for (int j = 0; j < n; ++j){
			if(s[i] == v[j].name){
				s.erase(i-1, 2);
				i-=1;
				m-=1;
			}
		}
	}
//	cout <<"NUMS: "<< s << endl;
//	cout << "m = "<< m << endl;
	int num1 = atoi(s.c_str());
	ans+=atoi(s.c_str());			
	if(s.size() % 2 == 0){
		m-=(cap(num1)+1);
		s.erase(0,cap(num1)+1);
	}
	else{
		m-=cap(num1);
		s.erase(0,cap(num1));}
	for (int i = 0; i < m; ++i){
		int num = atoi(s.c_str());
		ans+=atoi(s.c_str());
//		cout << atoi(s.c_str()) << endl;
//		cout << "DELSIZE="<<cap(num)<< endl;
		s.erase(0, cap(num)+1);
		i-=(cap(num)+1);
		m-=(cap(num)+1);
	}

	// TODO check eraze and m <<example>>: 2+2 = 6
	cout << ans;

    return 0;
}
