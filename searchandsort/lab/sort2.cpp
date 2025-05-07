#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int K;
    cin >> K;

    unordered_set<int> friends;
    for (int i = 0; i < K; i++) {
        int id;
        cin >> id;
        friends.insert(id);
    }

    int N;
    cin >> N;

    int best_id = -1;
    int best_time = 6 * 60 + 1; 
    int count = 0;

    for (int i = 0; i < N; i++) {
        int id, h, m;
        cin >> id >> h >> m;

        if (friends.count(id)) {
            if (h == -1 && m == -1) continue; 
            int time = h * 60 + m;
            if (time <= 360) {
                count++;
                if (time < best_time) {
                    best_time = time;
                    best_id = id;
                }
            }
        }
    }

    cout << best_id << " " << count << endl;

    return 0;
}
