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
        //precompuation
        vector<vector<int>> factors (10000, vector<int>());
        for (int i = 2; i <= 10000; i++) {
            int cpyi = i;
            for (int j = 2; j <= i; j++) {
                if (cpyi % j == 0) {
                    factors[i].push_back(j);
                    cpyi /= j;
                    j--;
                }
            }
        }
//        for (int i = 2; i < 10; i++){
//            cout << factors[i].size() << endl;
//        }
        int t = 5;

        while (t--){
            int n; cin >> n;
            vector<pii> mp;
            for (int i = 2; i <= n; i++){
                for (int j : factors[i]){
                    bool flag = false;
                    for (int k = 0; k < mp.size(); k++){
                        if (mp[k].first == j){
                            mp[k].second++;
                            flag = true;
                            break;
                        }
                    }
                    if (!flag){
                        mp.push_back({j, 1});
                    }
                }
            }
            sort(mp.begin(), mp.end());

            for (int i = 0; i < mp.size(); i++){
                if (i != mp.size() - 1){
                    cout << mp[i].first << "^" << mp[i].second << " * ";
                }
                else{
                    cout << mp[i].first << "^" << mp[i].second << endl;
                }
            }
        }
    }
