#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;cin >> tc;
    while(tc--) {
        int x;cin >> x;
        string s;cin >> s;
        s = " " + s;
        vector<int> next_p(x + 2, x + 1);
        for(int j = x; j >= 1; j--) {
            if(s[j] == 'p') next_p[j] = j;
            else next_p[j] = next_p[j + 1];
        }
        vector<int> last_s(x + 1, 0);
        for(int j = 1; j <= x; j++) {
            if(s[j] == 's') last_s[j] = j;
            else last_s[j] = last_s[j - 1];
        }
        
        vector<int> Uj(x);
        for(int j = 1; j <= x; j++) {
            int up = INT32_MAX;
            if(next_p[j] <= x) {
                up = next_p[j];  
            }
            int us = INT32_MAX;
            if(last_s[j] >= 1) {
                us = x - last_s[j] + 1;  
            }
            if(up != INT32_MAX && us != INT32_MAX) {
                Uj[j-1] = min(up, us);
            }
            else if(up != INT32_MAX) {
                Uj[j-1] = up;
            }
            else if(us != INT32_MAX) {
                Uj[j-1] = us;
            }
            else {
                Uj[j-1] = x;
            }
        }

        sort(Uj.begin(), Uj.end());
        bool ok = true;
        for(int i = 1; i <= x; i++) {
            if(Uj[i-1] < i) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}