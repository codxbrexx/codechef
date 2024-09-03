// #include <iostream>
// using namespace std;

// int main() {
//     // your code goes here
    
//     int t,a,b,c;
    
//     cin>>t;
    
//     for(int i=1;i<=t;i++)
//     {
//         cin>>a>>b>>c;
//         cout<<max(a,max(b,c))<<"\n";;
//     }
    
//     return 0;
// }



// #### not vailed for all the test cases #####
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t; cin >> t; 
// 	while (t--){
// 	    int x, y, z;
// 	    cin >>x >>y >>z;
	    
// 	    if(x>y & x>z) {
// 	        cout << x << endl;
// 	    }else if(y>z & y>x){
// 	        cout << y	<<endl;
// 	    }else {
// 	        cout << z << endl;
// 	    }
	    
// 	}

// }


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t; 
	while (t--){
	    int x, y, z;
	    cin >>x >>y >>z;
	    
	    cout<< max(x,max(y,z))<<endl;;
	    
	}

}

