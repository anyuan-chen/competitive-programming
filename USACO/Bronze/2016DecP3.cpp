    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
    char kekw [11][11];
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        freopen("cowsignal.in", "r", stdin);
        freopen("cowsignal.out", "w", stdout);
        int m, n, k; cin >> m >> n >> k;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cin >> kekw[i][j];
            }
        }
        for (int i = 0; i < m; i++){
            for (int b = 0; b < k; b++){
                for (int j = 0; j < n; j++){
                    for (int a = 0; a < k; a ++){
                        cout << kekw[i][j];
                    }
                }
                cout << endl;
            }
        }
    }
