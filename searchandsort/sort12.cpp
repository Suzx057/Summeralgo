#include<iostream>
using namespace std;

void sort(int arr[],int n){
    for(int i = 0 ;i<n;i++){
        for(int j = 0 ; j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void dissum(int arr[],int n){
    sort(arr,n);
    int sum = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == arr[i+1]){
            
        }else{
            sum += arr[i];
        }
    }
    cout<<sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    dissum(arr,n);
}