#include<iostream>
using namespace std;

// int fibo(int n){
//     if(n == 0)return 0;
//     if(n == 1)return 1;
//     return fibo(n-1) + fibo(n-2);
// }
int fac(int n){
    if(n == 0)return 1;
    return n * fac(n-1);
}

int main(){
    int n;
    cin>>n;
    //cout<<fibo(n);
    cout<<fac(n);
}