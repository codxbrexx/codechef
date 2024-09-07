#include <bits/stdc++.h>
using namespace std;
void solution(){
    int x,y;
    cin>>x>>y;
    int main_x =max(0,(2*y)-x);
    int main_y = max(0,(2*x)-x);

    int dec_y = max(0,y-(x/2));
    int dec_x =max(0,x- (y/2));

    int min_main = min({main_x, main_y, dec_y, dec_x});
    cout<<min_main<<endl;
}

int main() {
    int t; cin>> t;
    while(t--)solution();
    return 0;
	

}