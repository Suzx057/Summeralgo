#include<iostream>
using namespace std;

long long callcount = 0;

long long recur(long long n) {
    callcount++;
    if (n == 1) return 1;
    return n * n + recur(n - 1);
}

int main() {
    long long n;
    cin >> n;

    if (n <= 1 || n >= 9999) {
        cout << "ค่าที่ป้อนไม่ถูกต้อง" << endl;
        return 0;
    }

    long long result = recur(n);

    cout << callcount * 2 << " " << result << endl;

    return 0;
}
