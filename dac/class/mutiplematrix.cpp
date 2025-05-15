#include<iostream>
using namespace std;

int main() {
    int m, n;
    cin >>n; // m x n

    int arr1[n][n]; // A: m x n
    int arr2[n][n]; // B: n x m (เพื่อให้คูณได้กับ A)

    // รับค่าเมทริกซ์ A
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr1[i][j];

    // รับค่าเมทริกซ์ B
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr2[i][j];

    // คูณ A (m x n) * B (n x m) = C (m x m)
    int result[n][n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += arr1[i][k] * arr2[k][j];
                count++;
            }
        }
    }

    // แสดงผลลัพธ์
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j];
            if (j < m - 1) cout << " ";
        }
        cout << endl;
    }

    cout << "count = " << count;
    return 0;
}
