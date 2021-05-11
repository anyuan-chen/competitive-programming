#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int solve(int m, int x, int y){
    int curpow = (int)(pow(5,m-1) + 0.5); //should be 1 for m = 1, 5 for m =2 , 25 for m = 3 etc
    if (x > curpow && x <= 4 * curpow && y <= 3 * curpow){
        if (x > curpow && x <= 4 * curpow && y <= curpow){
            return true;
        }
        if (x > 2*curpow && x <= 3 * curpow && y <= 2*curpow){
            return true;
        }
        if (solve(m-1, x%curpow, y%curpow)){
            return true;
        }
    }
    return false;
}

int main()
{
    int t; cin >> t;
    for (int cs = 0; cs < t; cs++){
        int m, x, y; cin >> m >> x >> y; x++; y++;
        if (solve(m,x,y)){
            cout << "crystal" << endl;
        }
        else{
            cout << "empty" << endl;
        }
    }
}
