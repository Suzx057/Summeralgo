#include<iostream>
using namespace std;

int callcount = 0;
void back(int pos,int n,int h,int oncount){
    if(pos == n){
        if(oncount == h){
            callcount++;
        }
        return;
    }
    if(oncount < h){
        back(pos+1,n,h,oncount+1);
    }
    back(pos+1,n,h,oncount);
}
int main(){
    int n,h;
    cin>>n>>h;
    back(0,n,h,0);
    cout<<callcount;
}