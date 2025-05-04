#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int MAX = 1000; 
    int data[n];       
    int freq[MAX] = {0};     

    
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
        freq[data[i]]++;
    }

    int maxFreq = 0;
    int minFreq = n + 1;

    for (int i = 0; i < MAX; ++i) {
        if (freq[i] > 0) {
            if (freq[i] > maxFreq) maxFreq = freq[i];
            if (freq[i] < minFreq) minFreq = freq[i];
        }
    }

    cout << (maxFreq - minFreq) << endl;
    return 0;
}

// เมื่อวนลูปทำงาน:

// data[0] = 4, freq[4] = 1

// data[1] = 2, freq[2] = 1

// data[2] = 4, freq[4] = 2

// ...

// สุดท้ายได้ freq[4] = 4, freq[2] = 3

// → พร้อมนำไปคำนวณต่อว่า ความถี่มากสุด - ความถี่น้อยสุด = 4 - 3 = 1

// อยากให้ผมอธิบายการหาความถี่สูงสุด-ต่ำสุดที่อยู่ถัดไปด้วยไหมครับ?