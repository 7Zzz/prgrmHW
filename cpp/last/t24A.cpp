#include <iostream>
#include <vector>

using namespace std;

struct Tupel{
	int in;
	int out;
	int cost;
};
int flag = 0;

int rec(int v,int x,int y, vector<Tupel> graph){
	for(int i = 0; i < graph.size(); ++i){
		if(graph[i].in == v){
			rec(graph[i].out, x, y);
			flag = 1;
		}
	}
	if(flag == 0){
		for(int i = 0; i < graph.size(); ++i){
			if(graph[i].out == v){
				rec(graph[i].in, x, y)/// paul clever
			}

		}
	}
}


int main(){
	int n;
	vector<Tupel> graph;
	cin >> n;
	for(int i = 0; i < n; ++i){
		int a,b,c;
		cin >> a >> b >> c;
		graph.push_back({a, b, c});
	}
	rec(graph[0].in, graph[0].cost,0);
}


