#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;
        long long total = a + b + c;
        long long aloop = n / total;
        long long wd = aloop * total;
        long long day = aloop * 3;

        if (wd < n) {
            day++;
            wd += a;
            if (wd >= n) {
                cout << day << endl;
                continue;
            }
            day++;
            wd += b;
            if (wd >= n) {
                cout << day << endl;
                continue;
            }
            day++;
            wd += c;
            if (wd >= n) {
                cout << day << endl;
                continue;
            }
        }
        cout << day << endl;
    }
    return 0;
}