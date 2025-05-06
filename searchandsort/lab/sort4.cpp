#include<iostream>
#include<vector>

using namespace std;

int selectionSort(vector<int>& s) {
    int n = s.size();
    int count = 0;

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
            count++;
        }
    }
    return count;
}

int main() {
    int input;
    cin >> input;
    vector<int> s(input);
    
    for(int i = 0; i < input; i++) {
        cin >> s[i];
    }

    int count = selectionSort(s); 

    for(int i = 0; i < input; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    cout << count;

    return 0;
}
