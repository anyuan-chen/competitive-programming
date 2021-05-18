#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //some sort of indexing trick here
    int n; cin >> n; string ts; cin >> ts; int q; cin >> q;
    vector<char> s (ts.begin(), ts.end());
    bool flipped = false;
    while (q--){
        int t; cin >> t;
        int a, b; cin >> a >> b; a--; b--;
        if (t == 1) {
            if (flipped) {
                if (a > n - 1) {
                    a -= n;
                } else {
                    a += n;
                }
                if (b > n - 1) {
                    b -= n;
                } else {
                    b += n;
                }
            }
            int temp = s[a];
            s[a] = s[b];
            s[b] = temp;
        }
        else if (t == 2){
            flipped = !flipped;
        }
    }
    if (flipped){
        for (int i = n; i < s.size(); i++){
            cout << s[i];
        }
        for (int i = 0; i < n; i++){
            cout << s[i];
        }
    }
    else{
        for (int i = 0; i < 2*n; i++){
            cout << s[i];
        }
    }
}
