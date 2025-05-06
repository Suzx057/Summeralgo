#include<iostream>
#include<vector>
using namespace std;

// void bub(vector<int>&s){
//     int n = s.size();
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n-i-1;j++){
//             if(s[j] > s[j+1]){
//                 swap(s[j],s[j+1]);
//             }
//         }
//     }
// }
void bub(int arr[],int n){
    for(int i =0 ; i<n;i++){
        for(int j = 0 ; j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    // vector<int> s(n);
    // for(int i = 0 ;i<s.size();i++){
    //     cin>>s[i];
    // }
    // bub(s);
    // cout<<endl;
    // for(int i = 0 ;i<s.size();i++){
    //     cout<<s[i]<<" ";
    // }
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    bub(arr,n);

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}