#include<iostream>
#include<vector>
using namespace std;

int swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubblesort(vector<int>&s){
    int n = s.size();
    for(int i = 0 ; i < n-1;i++){
        for(int j = 0 ; j < n - 1 - i;j++){
            if(s[j] > s[j+1]){
                swap(s[j],s[j+1]);
            }
        }
    }
}



void compare(vector<int>&s){
    int n = s.size();
    bubblesort(s);
    vector<int> even,odd;
    for(int i =0;i<n;i++){
        if(s[i] % 2 == 0 ){
            even.push_back(s[i]);
        }else{
            odd.push_back(s[i]);
        }
    }
    
    int evencount = 0;
    int oddcount = 0;
    for(int i = 0 ;i<even.size();i++){
        cout<<even[i]<<" ";
        evencount += even[i]; 
    }
    cout<<evencount<<" ";
    for(int i = 0 ; i <odd.size();i++){
        cout<<odd[i]<<" ";
        oddcount += odd[i];
    }
    cout<<oddcount<<" ";
    
}



int main(){
    int n;
    cin>>n;
    vector<int> s(n);
    for(int i = 0;i<s.size();i++){
        cin>>s[i];
    }
    compare(s);

}