#include<iostream>
using namespace std;
int callcount = 0;

int sech(int low,int high,int n){
    if(low>high)return high;
    callcount++;
    int mid = (low+high)/2;

    if(mid*mid > n){
        return sech(low,mid-1,n);
    }else{
        return sech(mid+1,high,n);
    }
}

int main(){
    int n;
    cin>>n;
    int re = sech(1,n,n);
    cout<<re<<" "<<callcount;
}