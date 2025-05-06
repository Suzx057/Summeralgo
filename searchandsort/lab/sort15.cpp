#include <iostream>
using namespace std;

const int MAX = 1000;

struct Runner {
    int id;
    int timeInSeconds;
};

int toSeconds(int h, int m, int s) {
    return h * 3600 + m * 60 + s;
}

bool isValid(int id, int h, int m, int s) {
    if (id < 1 || id > 1000) return false;
    if (h < 8 || h > 15 || m < 0 || m > 59 || s < 0 || s > 59) return false;

    int seconds = toSeconds(h, m, s);
    return seconds >= 8 * 3600 && seconds <= 15 * 3600 + 59 * 60 + 59;//08:00:00 , 15:59:59
}

int main() {
    Runner runners[MAX];
    int count = 0;

    while (true) {
        int id, h, m, s;
        cin >> id >> h >> m >> s;
        if (id == 0 && h == 0 && m == 0 && s == 0) break;

        if (count < MAX && isValid(id, h, m, s)) {
            runners[count].id = id;
            runners[count].timeInSeconds = toSeconds(h, m, s);
            count++;
        }
    }

    //Bubble sort
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (runners[j].timeInSeconds > runners[j + 1].timeInSeconds) {
                Runner temp = runners[j];
                runners[j] = runners[j + 1];
                runners[j + 1] = temp;
            }
        }
    }
    
    // Output
    for (int i = 0; i < count; ++i) {
        cout << runners[i].id;
        if (i < count - 1) cout << " ";
    }

    return 0;
}
