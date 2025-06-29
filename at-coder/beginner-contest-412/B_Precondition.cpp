#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    bool valid = true;

    for (int i = 1; i < s.size(); i++) {
        if (isupper(s[i])) {
            bool found = false;
            for (int j = 0; j < t.size(); j++) {
                if (s[i - 1] == t[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                valid = false;
                break;
            }
        }
    }

    cout << (valid ? "Yes" : "No") << endl;
    return 0;
}
