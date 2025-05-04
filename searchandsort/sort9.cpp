#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void minsort(int arr[],int n){
    for(int i =0 ; i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j+1],arr[j]);
            }
        }
    }
}

int main(){
    int n;
    int target;
    cin>>n>>target;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    minsort(arr,n);
    cout<<arr[target-1];
}

