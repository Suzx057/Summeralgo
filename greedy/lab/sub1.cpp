#include<iostream>
using namespace std;

void subset1(int x[], int n, int k){
	if( k == n){
		for(int i = 1; i <= k; i++){
			cout<<x[i]<<" ";
		}

		cout<<endl;
	}else {
		x[k+1] = 1;
		subset1(x, n, k+1);
		x[k+1] = 0;
		subset1(x, n, k+1);
	}
}

int main(){
	int k = 0;
	int x[5] = {0};
	
	subset1(x, 4, k);
	
	return 0;
}
