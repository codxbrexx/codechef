#include<bits/stdc++.h>
using namespace std;
//Reverse The Number

int reverseNum(int n){
    int res = 0;
    while(n > 0){
        int d = n % 10;
        res = res * 10 + d;
        n /= 10;
    }
    return res;
}
int main() { 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << reverseNum(n) << endl;
    }
    return 0;
}
