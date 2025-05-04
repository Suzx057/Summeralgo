#include<iostream>
using namespace std;

string isSorted(int arr[], int i, int n) {
    if (i >= n - 1) return "Yes"; 
    if (arr[i] > arr[i + 1]) return "No"; 
    return isSorted(arr, i + 1, n); 
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << isSorted(arr, 0, n);
    return 0;
}
