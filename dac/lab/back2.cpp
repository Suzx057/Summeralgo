#include <iostream>
#include <vector>
using namespace std;

const int SIZE = 9;
int board[SIZE][SIZE];
vector<vector<vector<int>>> solutions;

bool isValid(int row, int col, int num) {
    for (int i = 0; i < SIZE; ++i)
        if (board[row][i] == num || board[i][col] == num)
            return false;

    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[startRow + i][startCol + j] == num)
                return false;

    return true;
}

void solve(int row = 0, int col = 0) {
    if (row == SIZE) {
        vector<vector<int>> solution(SIZE, vector<int>(SIZE));
        for (int i = 0; i < SIZE; ++i)
            for (int j = 0; j < SIZE; ++j)
                solution[i][j] = board[i][j];
        solutions.push_back(solution);
        return;
    }

    if (board[row][col] != 0) {
        if (col == SIZE - 1)
            solve(row + 1, 0);
        else
            solve(row, col + 1);
    } else {
        for (int num = 1; num <= 9; ++num) {
            if (isValid(row, col, num)) {
                board[row][col] = num;
                if (col == SIZE - 1)
                    solve(row + 1, 0);
                else
                    solve(row, col + 1);
                board[row][col] = 0;
            }
        }
    }
}

int main() {
    // รับอินพุตจากผู้ใช้
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            cin >> board[i][j];

    solve();

    // แสดงผลลัพธ์
    if (solutions.empty()) {
        cout << "0" << endl;
    } else {
        cout << solutions.size() << "\n\n";
        for (const auto& sol : solutions) {
            for (const auto& row : sol) {
                for (int val : row)
                    cout << val << " ";
                cout << "\n";
            }
            cout << "\n";
        }
    }

    return 0;
}
