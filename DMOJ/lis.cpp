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
        int n; cin >> n;
        vector<ll> dp;
        for (int i = 0; i < n; i++){
            ll insert; cin >> insert;
            auto it = lower_bound(dp.begin(), dp.end(), insert);
            if (it == dp.end()){
                dp.push_back(insert);
            }
            else{
                *it = insert;
            }
        }
        cout << dp.size() << endl;
    }
