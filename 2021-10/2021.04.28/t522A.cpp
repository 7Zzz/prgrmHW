    #include <iostream>
    #include <map>
    #include <string>
    using namespace std;
     
    int main()
    {
    	int n, ans = 1;
    	string a, b, c;
    	map<string, int> l;
    	l["polycarp"] = 1;
    	cin >> n;
    	for (int k = 0; k < n; ++k){
    		cin >> a >> b >> c;
    		for (int i = 0; i < a.size(); i++)
    			a[i] = tolower(a[i]);
    		for (int i = 0; i < c.size(); i++)
    			c[i] = tolower(c[i]);
    		int e = l[c] + 1;
    		if (e > ans)
    			ans = e;
    		l[a] = e;
    	}
    	cout << ans;
    	return 0;
    }