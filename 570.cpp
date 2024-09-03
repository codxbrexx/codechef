#include <bits/stdc++.h>
using namespace std;
void cand() {
    int n , x;
    cin >> n >> x;
    n = max(0, n-x);
    int rem = n % 4 ? 1 : 0;
    cout << (n/4) + rem << endl;
}

int main() {
    int t; cin>> t;
    while (t--) cand ();
    return 0;
   

}