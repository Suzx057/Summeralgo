#include<iostream>
using namespace std;

int callcount = 0;

int recur(int n){
    callcount++;
    if(n == 1)return 1;
    return n * n + recur(n-1);
}

int main(){
    int n;
    cin>>n;
    int re = recur(n);
    cout<<callcount * 2<<" "<<re;
}