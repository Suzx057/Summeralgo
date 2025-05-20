#include<iostream>
using namespace std;

int Maxchoc(int arr[],int n,int index){
    if(index>=n){
        return 0;
    }
    int take = arr[index] + Maxchoc(arr,n,index+2);
    int quit = Maxchoc(arr,n,index+1);

    if(take>quit){
        return take;
    }else{
        return quit;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int re = Maxchoc(arr,n,0);
    cout<<re;
}