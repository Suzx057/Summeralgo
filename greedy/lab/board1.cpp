#include<iostream>
using namespace std;

int n;
int arr[1000];
int best = 1000000;
int sum1 = 0,sum2 = 0;

void solve(int idx,int s1,int s2){
    if(idx == n){
        int diff;
        if(s1>s2){
            diff = s1 - s2;
        }else{
            diff = s2 - s1;
        }

        if(diff<best){
            best = diff;
            sum1 = s1;
            sum2 = s2;
        }
        return;
    }
    solve(idx + 1,s1 + arr[idx],s2);
    solve(idx + 1,s1,s2+arr[idx]);
}

int main(){
    cin>>n;
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    solve(0,0,0);
    cout<<best<<endl;
    cout<<sum1<<endl;
    cout<<sum2<<endl;
}