#include <iostream>
using namespace std;

int multiplyCount = 0;

long long power(int a, int n) {
    if (n == 0) return 1;
    if (n == 1) return a;

    long long half = power(a, n / 2);
    multiplyCount++;

    if (n % 2 == 0) {
        return half * half;
    } else {
        multiplyCount++;
        return half * half * a;
    }
}

int main() {
    int a, n;
    cin >> a >> n;

    multiplyCount = 0;
    long long result = power(a, n);

    cout << result << " " << multiplyCount << endl;

    return 0;
}
