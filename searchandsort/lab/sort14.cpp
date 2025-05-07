#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int>& a, pair<int, int>& b) {
    if (a.first != b.first) return a.first < b.first;
    return a.second > b.second; // ให้ "เข้า" (1) มาก่อน "ออก" (0)
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) cin >> B[i];

    vector<pair<int, int>> events;
    for (int i = 0; i < n; i++) {
        events.push_back({A[i], 1});
        events.push_back({B[i], 0});
    }

    sort(events.begin(), events.end(), compare);

    int current = 0, max_people = 0, time = 0;
    for (auto e : events) {
        if (e.second == 1) current++;
        else current--;

        if (current > max_people) {
            max_people = current;
            time = e.first;
        }
    }

    cout << time << " " << max_people << endl;
    return 0;
}
