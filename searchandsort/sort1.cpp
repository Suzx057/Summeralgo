#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr, bool t1 = true) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if ((t1 && arr[j] > arr[j + 1]) || (!t1 && arr[j] < arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


void sort1(vector<int> &s){
    bubbleSort(s);
    vector<int> result;
    int n = s.size();
    int mid = n / 2;


    for(int i = n -1 ; i>=mid + 1 ; i--){
        result.push_back(s[i]);
    }

    for(int i = 0 ;i < mid + 1 ; i++){
        result.push_back(s[i]);
    }

    for(int i =0;i<n;i++){
        cout<<result[i]<<" ";
    }

}
void sort2(vector<int> &s){
    bubbleSort(s);
    vector<int> even,odd;

    for(int i = 0;i<s.size();i++){
        if(s[i] % 2 == 0 ){
            even.push_back(s[i]);
        }else{
            odd.push_back(s[i]);
        }
    }

    bubbleSort(even);
    bubbleSort(odd,false);
    for(int i = 0 ;i<even.size();i++){
        cout<<even[i]<<" ";
    }
    for(int i =0;i<odd.size();i++){
        cout<<odd[i]<<" ";
    }
}
int main(){
    int input;
    cin>>input;
    vector<int> s(input);
    for(int i =0;i<s.size();i++){
        cin>>s[i];
    }
    int cc;
    cin>>cc;
    switch(cc){
        case 1:
            sort1(s);
            break;
        case 2:
            sort2(s);
            break;
        default:
            cout<<"error";
    }
}