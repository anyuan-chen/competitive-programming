    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
    ll vec[(ll)1e7+2];
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll n; cin >> n;
        ll x, y; cin >> x >> y;
        ll r; cin >> r;
        for (int i = 0; i < r; i++){
            ll left, right; cin >> left >> right;
            vec[left]++; vec[right+1]--;
        }
        for (int i = 1; i <= n; i++){
            vec[i] += vec[i-1];
        }
        for (int i = 1; i <= n; i++){
            vec[i] += vec[i-1];
        }
        cout << vec[y] - vec[x-1] << endl;
    }
