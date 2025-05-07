#include<iostream>
using namespace std;

void bub(int arr[],int n){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bub(arr,n);
    //4 2
    //1 2 3 4
    //2
    for(int i = 0;i<n;i++){
        if(i  == target -1  ){
            cout<<arr[i];
        }
    }
}