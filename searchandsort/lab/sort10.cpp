#include <iostream>
using namespace std;

string longest_increasing_subsequence(int N, string digits) {
    
    int sequence[N];
    for (int i = 0; i < N; ++i) {
        sequence[i] = digits[i] - '0'; 
    }

    
    int dp[N];
    int prev[N]; 
    for (int i = 0; i < N; ++i) {
        dp[i] = 1;
        prev[i] = -1;
    }

    
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            if (sequence[i] >= sequence[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;
                prev[i] = j;
            }
        }
    }

    \
    int max_length = 0;
    int index = -1;
    for (int i = 0; i < N; ++i) {
        if (dp[i] > max_length) {
            max_length = dp[i];
            index = i;
        }
    }

    
    string lis = "";
    while (index != -1) {
        lis = (char)(sequence[index] + '0') + lis;
        index = prev[index];
    }

    return lis;
}

int main() {
    int N;
    string digits;

    
    cin >> N;
    cin >> digits;

    
    string result = longest_increasing_subsequence(N, digits);

    
    cout << result << endl;

    return 0;
}
