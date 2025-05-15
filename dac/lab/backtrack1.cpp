#include <iostream>
using namespace std;

int callcount = 0;

void backtrack(int pos, int n, int h, int onCount) {
    if (pos == n) {
        if (onCount == h) {
            callcount++;
        }
        return;
    }

    // เลือกเปิด
    if (onCount < h)
        backtrack(pos + 1, n, h, onCount + 1);

    // เลือกไม่เปิด
    backtrack(pos + 1, n, h, onCount);
}

int main() {
    int n, h;
    cin >> n >> h;

    if (n >= 1 || h >= 16 || h >= n ) {
        backtrack(0, n, h, 0);
        cout << callcount << endl;
    }else{
         cout << "ข้อมูลไม่ถูกต้อง" << endl;
        return 0;
    }

    

    return 0;
}
