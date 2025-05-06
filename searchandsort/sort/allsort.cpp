#include<iostream>
#include<vector>
using namespace std;

//you could say a = a + 2 or a += 2



void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int>& s) {
    int n = s.size();
    
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(s[j] < s[minIndex]) {
                minIndex = j;
            }
        }

        if(minIndex != i) {
            int temp = s[i];
            s[i] = s[minIndex];
            s[minIndex] = temp;
        }
    }
    
}





int main(){

}