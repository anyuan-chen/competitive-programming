#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld; 
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;

int main(){
    int v,t,s,d; cin >> v >> t >> s >> d;
    t *= v; s *= v;
    if (t <= d && d <= s){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}

















