#include <bits/stdc++.h>
using namespace std;
int dcount(long long n) {
    int d = 0;
    for(long long i = 1; i * i <= n; i++)
        if(n % i == 0) d += 1 + (i * i != n);
    return d;
}
int main() {
    int n, m; 
    cin >> n >> m;
    long long f = 1;
    for(int i = 1; i <= m; i++) f *= i;
    while(n--) {
        int x;
        cin >> x;
        cout << dcount(x * f) << " ";
    }
}