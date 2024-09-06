#include <bits/stdc++.h>
using namespace std;
void solution(){
    int x ; cin >> x;
    if(x%3==0){
        cout<<"Normal"<<endl;
    }else if (x%3==1){
        cout << "Huge"<<endl;
    }else{
        cout<<"Small"<<endl;
    }
}

int main() {
	int t; cin >> t; 
	while(t--)solution();
	return 0;
	

}