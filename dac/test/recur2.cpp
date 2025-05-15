#include<iostream>
using namespace std;

int callcount = 0;

int fibo(int n){
    callcount++;
    if(n==0)return 0;
    if(n==1)return 1;
    return fibo(n-1) + fibo(n-2);
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
    int re = fibo(n);
    cout<<callcount<<" "<<re;
}