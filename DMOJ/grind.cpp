#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll psa[(int)1e7 + 2];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int s, f; cin >> s >> f;
        psa[s] ++; psa[f]--;
    }
    ll mx = -1;
    for (int i = 0; i <= 1e7+1; i++){
        psa[i] += psa[i-1];
        mx = max(mx, psa[i]);
    }
    cout << mx << endl;

}
