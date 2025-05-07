#include<iostream>
using namespace std;

void bub(int arr[],int n){
    for(int i =0;i<n-1;i++){
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
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    bub(arr,n);
    int ev = 0;
    int od = 0;
    for(int i = 0 ;i<n;i++){
        if(arr[i] % 2 == 0){
            cout<<arr[i]<<" ";
            ev += arr[i];
        }
    }
    cout<<ev<<" ";
    for(int i = 0 ;i<n;i++){
        if(arr[i] % 2 != 0){
            cout<<arr[i]<<" ";
            od += arr[i];
        }
    }
    cout<<od;
}