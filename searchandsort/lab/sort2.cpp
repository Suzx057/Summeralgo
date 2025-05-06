#include <iostream>
#include <unordered_set>
using namespace std;

int toMinutes(int h, int m) {
    return h * 60 + m;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K;
        cin >> K;

        unordered_set<int> friends;
        for (int i = 0; i < K; ++i) {
            int id;
            cin >> id;
            friends.insert(id);
        }

        int N;
        cin >> N;

        int bestTime = 360 + 1; // มากกว่า 6 ชั่วโมง
        int bestId = -1;
        int countWithin6Hours = 0;

        for (int i = 0; i < N; ++i) {
            int id, h, m;
            cin >> id >> h >> m;

            if (friends.count(id)) {
                if (h == -1 && m == -1) continue; // เลิกวิ่งกลางทาง
                int totalMin = toMinutes(h, m);
                if (totalMin <= 360) {
                    countWithin6Hours++;
                    if (totalMin < bestTime) {
                        bestTime = totalMin;
                        bestId = id;
                    }
                }
            }
        }

        cout << bestId << " " << countWithin6Hours << endl;
    }

    return 0;
}
