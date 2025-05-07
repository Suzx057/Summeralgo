#include <iostream>
using namespace std;

int main() {
    int V, E;
    cin >> V >> E;

    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        
    }

    int evenCount = 0;
    for (int i = 1; i <= V; ++i) {
        if (i % 2 == 0)  
            evenCount++;
    }

    cout << evenCount << '\n'; 
    return 0;
}
