#include <bits/stdc++.h>
using namespace std;
void solution (){
    int x; cin >> x;
    int opr =0;
    if (x % 7==0){
        opr = x/7;
        
    }else {
        opr = x/7;
        if (x%7>=2){
            opr++;
        }
    }
    cout << opr <<endl;
}

int main() {
	int t; cin >> t; 
	while(t--)solution();
	return 0;
	    

}

