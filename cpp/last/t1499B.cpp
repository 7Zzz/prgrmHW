#include <iostream>


using namespace std;

int arr[12] = {1,1,0,1,0,1,0,1,1,0,1,1};

/*
int rec(int n, int p){ // n -- number;  p -- index
	if(take){
		then check arr[n] <= p;
		launch rec(arr[n], n+1);
	}
	else if(nnot take){ 
		then check arr[n+1] <= p;
   		lauch rec(arr[n+1], n+2);
	}
}*/
int size(int *arr){
	return sizeof(arr)/sizeof(*arr);
}
int count = 0;  
int my_rec(int pos, int CWD){// can we delete
	if(pos+1 > size(arr)) return count+=1;
	if(arr[pos]>arr[pos+1] && CWD == 0) return count+=0;
	else if(arr[pos]>arr[pos+1] && CWD == 1) return count+=my_rec(pos+1,0);
	else if(arr[pos]<=arr[pos+1] && CWD == 1) return count+=my_rec(pos+1,0);
	else if(arr[pos]<=arr[pos+1] && CWD == 0) return count+=my_rec(pos+1,1);
}

int main(){
	cout << my_rec(0,1) << endl;
	
return 0;
}
