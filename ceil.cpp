// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t; cin >> t;
// 	while(t--){
// 	    double x, y;
// 	    cin >> x>> y;
// 	    cout << ceil((y-x)/8)<<endl; //ceil func get us greater value 
	    
	    
	        
	        
// 	}

// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--){
	    int n; 
	    cin >>n; 
	    string s; 
	    cin >>s;
	    for (int i=0; i<n; i++){
	        if (s[i]=='A') s[i]='T';
	        else if (s[i]=='T') s[i]='A';
	        else if (s[i]=='G') s[i]='C';
	        else if (s[i]=='C') s[i]='G';
	    }
	    cout <<s<<endl;
	}
	return 0;

}

