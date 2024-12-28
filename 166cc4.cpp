#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        vector<pair<int,int>> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.rbegin(), a.rend());
        int ans = n;
        for(int i = 1; i < n; i++) {
            ans -= (abs(a[i].second - a[i-1].second) == 1);
        }
        cout << ans <<endl;

}
}