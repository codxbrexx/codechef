#include <bits/stdc++.h>

using namespace std;

string Check(string s) {
    for (char s: s) {
        if (s == 'I') {
            return "INDIAN";
        } else if (s == 'Y') {
            return "NOT INDIAN";
        }
    }
    return "NOT SURE";
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << Check(s) << endl;

    }
}