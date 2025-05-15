#include<iostream>
using namespace std;

int callcount = 0;


int recur(int n){
    callcount++;  
    if(n==0)return 1;
    return 1 + recur(n/2);
    
      
}

int main(){
    int n;
    cin>>n;
    int re = recur(n);
    cout<<callcount - 1 <<" "<<re - 2;
}