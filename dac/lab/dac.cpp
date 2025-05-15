#include <iostream>
using namespace std;

int sqrtBinarySearch(int n, int &steps) {
    int low = 1, high = n, ans = 1;
    steps = 0;

    while (low <= high) {
        steps++;
        int mid = low + (high - low) / 2;

        if (mid <= n / mid) { // mid*mid <= n (ใช้หารเพื่อลดโอกาส overflow)
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    int steps = 0;
    int result = sqrtBinarySearch(n, steps);

    cout << result << " " << steps << endl;

    return 0;
}
