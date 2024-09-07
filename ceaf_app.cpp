#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t; 
	for(int k =0; k<t; k++) {
	    int s, x, y, z;
	    cin >> s >> x >> y >> z;
	    int opr = z - (s-(x+y));
	    if (opr <=0){
	         cout << "0"<<endl;
	    }else if (opr<=max(x,y))
	    {
	        
	         cout <<"1"<< endl;
        }
        else
        {
            cout << "2"<<endl;
            
        }
        
	     
	}
	return 0;

}