#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);

    ll n, q; cin >> n >> q;
    vector<ll> destroyed;
    for (int i = 0; i < n; i++){
        ll x, y; cin >> x >> y;
        destroyed.push_back(-1 * (ll)ceil(sqrt(x*x + y*y)));
    }
    sort(destroyed.begin(), destroyed.end());
    for (int i = 0; i < q; i++){
        ll r; cin >> r;
        auto it = (lower_bound(destroyed.begin(), destroyed.end(), -1 * r)) - destroyed.begin();
        cout << n - it << endl;
    }
}