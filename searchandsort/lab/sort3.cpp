#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0; 
    int temp = 0;  
    int start = 0; 

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] == arr[i + 1]) {
            temp++;
        } else {
            if(temp > count) {
                count = temp;
                start = i - temp + 1;  
            }
            temp = 1;
        }
    }

    
    if(temp > count) {
        count = temp;
        start = n - temp;
    }

    
    for(int i = 0; i < count; i++) {
        cout << arr[start + i];
    }

    return 0;
}
