#include <iostream>
using namespace std;

int main() {

      int n;
       cin >> n;
       int ar[n]; 
       int pf[n];
      for (int i=1; i < n; i++){
        cin >> ar[i];
        pf[i]= pf[i-1] + ar[i];
      }
      int q; cin >> q; 
      while(q--){
        int l, r;
        cin >> l >> r;
        cout << pf[r]- pf[l-1] <<endl;
        // long long sum =0; 
        // for ( int i=l; i<=r; i++){
        //   sum+= ar[i];
        // }
        // cout << sum <<endl;
      }
    

    return 0;
}
