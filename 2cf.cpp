#include <bits/stdc++.h>
using namespace std;
int func(vector<int>& a){
    int n = a.size();
    bool zeros = true;
    for(int x : a) {
        if(x != 0) {
            zeros = false;
            break;
        }
    }
    if(zeros) return 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            vector<bool> p(n + 1, false);
            for(int k = i; k <= j; k++) {
                if(a[k] <= n) p[a[k]] = true;
            }
            int mex = 0;
            while(mex <= n && p[mex]) mex++;
            if(mex == 0){
                bool possible = true;
                for(int k = 0; k < i; k++) if(a[k] != 0) possible = false;
                for(int k = j + 1; k < n; k++) if(a[k] != 0) possible = false;
                if(possible) return 1;
            }
        }
    }
    return 2;
}
int main(){
    int tc,n;
    cin >> tc;
    while(tc--) {
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << func(a) << '\n';
    }
}