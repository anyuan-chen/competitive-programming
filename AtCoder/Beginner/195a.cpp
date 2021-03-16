#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld; 
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;

int main(){
    ld a,b; cin >> a >> b;
    cout << setprecision(3) << fixed << (1.0 - (b/a))*100 << endl;
}

