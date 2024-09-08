#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--){
	    int x ; cin >> x; 
	    if ((x<5) || (x%5 != 0)){
	        cout << "-1"<<endl;
	    }else{
	        if (x==5){
	            cout << "1"<<endl;
	        }else {
	            int q = x/10;
	            int r = x%10;
	            if (r==0){
	                cout << q <<endl;
	            }else {
	                cout << q+1 << endl;
	            }
	            
	        }
	    }
	}
	return 0;

}
