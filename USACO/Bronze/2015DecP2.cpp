    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
    int narr [101];
    int marr[101];
    int main()
    {
        ios_base::sync_with_stdio(false)
        cin.tie(NULL);
        freopen("speeding.in", "r", stdin);
        freopen("speeding.out", "w", stdout);
        int n, m; cin >> n >> m;
        int curn = 0;
        for (int i = 0; i < n; i++){
            int l, tl; cin >> l >> tl;
            for (int b = 0; b < l; b++){
                narr[curn] = tl;
                curn++;
            }
        }
        int curm = 0;
        for (int i = 0; i < m; i++){
            int l, tl; cin >> l >> tl;
            for (int b = 0; b < l; b++){
                marr[curm] = tl;
                curm++;
            }
        }
        int maxover = 0;
        for (int i = 0; i < 100; i++){
            maxover = max(maxover, marr[i] - narr[i]);
        }
        cout << maxover << endl;
    }
