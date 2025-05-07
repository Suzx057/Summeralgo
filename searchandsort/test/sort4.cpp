#include<iostream>
using namespace std;

void selec(int arr[],int n){
    int count = 0;
    for(int i = 0;i<n-1;i++){
        int mini = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }

        if(mini!=i){
            int tmp = arr[i];
            arr[i] = arr[mini];
            arr[mini] = tmp;
            count++;
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<count;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    selec(arr,n);

}