#include <iostream>
#include <unordered_set>
#include <vector>
#include <queue>
#include <string>

using namespace std;


bool isValid(const string& s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') balance++;
        else if (c == ')') {
            if (balance == 0) return false;
            balance--;
        }
    }
    return balance == 0;
}

vector<string> removeInvalidParentheses(string s) {
    vector<string> result;
    unordered_set<string> visited;
    queue<string> q;
    bool found = false;

    q.push(s);
    visited.insert(s);

    while (!q.empty()) {
        string str = q.front();
        q.pop();

        if (isValid(str)) {
            result.push_back(str);
            found = true;
        }

        if (found) continue;  // หยุดลึกระดับต่อไป

        for (int i = 0; i < str.length(); ++i) {
            if (str[i] != '(' && str[i] != ')') continue;

            string t = str.substr(0, i) + str.substr(i + 1);
            if (!visited.count(t)) {
                q.push(t);
                visited.insert(t);
            }
        }
    }

    return result;
}

int main() {
    string line;
    while (getline(cin, line)) {
        if (isValid(line)) {
            cout << "Correct" << endl;
        } else {
            vector<string> validExpressions = removeInvalidParentheses(line);
            int minRemove = line.length() - validExpressions[0].length();
            cout << validExpressions.size() << " " << minRemove << endl;
            for (const string& expr : validExpressions)
                cout << expr << endl;
        }
    }

    return 0;
}
