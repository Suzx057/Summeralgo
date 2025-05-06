#include<iostream>
using namespace std;


void selec(int arr[],int n){
    for(int i = 0 ; i<n-1;i++){
        int minin = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minin]){
                minin = j;
            }
        }
        if(minin != i){
            int temp = arr[i];
            arr[i] = arr[minin];
            arr[minin] = temp;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++){
        cin>>arr[i];
    }
    selec(arr,n);
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";    
    }
}