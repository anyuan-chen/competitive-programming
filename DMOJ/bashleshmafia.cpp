#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int main()
{
    ll n; cin >> n; ll k; cin >> k;
    ll total = 0;
    for (int i = 0; i < n; i++){
        ll a, b; cin >> a >> b;
        total += (a * b) % k;
    }
    cout << total % k << endl;
}