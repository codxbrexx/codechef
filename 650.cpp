#include <bits/stdc++.h>
using namespace std;
void solution (){
    int x, y , z;
    cin >>x >> y >>z;
    int main_sol = max(z-y/x, 0);
    cout<<main_sol<<endl;
    
}

int main() {
	int t; cin >>t;
	while(t--)solution();
	return 0;
}