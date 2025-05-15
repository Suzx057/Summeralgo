#include<iostream>
using namespace std;

int callcount = 0;

int recur(int n){
    callcount++;
    if(n == 0)return 0;
    if(n == 1)return 1;
    return recur(n-1) + recur(n-2);
}

int main(){
    int n;
    cin>>n;
    if(n>50){
        return 0;
    }
    if(n<0){
        cout<<n;
        return 0;
    }
    int re = recur(n);
    cout<<callcount<<" "<<re;
}
