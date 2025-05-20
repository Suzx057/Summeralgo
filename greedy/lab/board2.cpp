#include<iostream>
using namespace std;

void bub(int arr[],int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] < arr[j+1]){
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
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    bub(arr,n);
    int sumA =0,sumB =0;
    for(int i =0;i<n;i++){
        if(sumA<=sumB){
            sumA += arr[i];
        }else{
            sumB += arr[i];
        }
    }

    int diff;
    if(sumA>sumB){
        diff = sumA - sumB;
    }else{
        diff = sumB - sumA;
    }

    cout<<diff<<endl;
    cout<<sumA<<endl;
    cout<<sumB<<endl;
}