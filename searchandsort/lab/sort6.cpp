#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string joined = "";

    
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        while (num > 0) {
            
            joined = char('0' + (num % 10)) + joined;
            num /= 10;
        }
    }

    
    string realJoined = "";
    for (int i = joined.length() - 1; i >= 0; --i)
        realJoined += joined[i];

    cout << realJoined << endl;

    
    string collapsed = "";
    bool seen[10] = { false };
    for (int i = 0; i < realJoined.length(); ++i) {
        int digit = realJoined[i] - '0';
        if (!seen[digit]) {
            collapsed += realJoined[i];
            seen[digit] = true;
        }
    }

    cout << collapsed << endl;

    return 0;
}
