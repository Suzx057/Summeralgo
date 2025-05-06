#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sort(int arr[], int n){
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}



int main(){
    int in;
    cin>>in;
    int arr[in];

    for(int i = 0 ;i < in;i++){
        cin>>arr[i];
    }
    sort(arr,in);

    int count = 0;
    for(int i = 0 ; i< in ; i++){
        if(arr[i] + 1  == arr[i+1]){
            
        }else{
            count++;
        }
        
    }

    cout<<count;
}

// 2 3 4 5 6 9 10 101 102 106

//2 3 4 5 6
//9 10
//101 102
//106