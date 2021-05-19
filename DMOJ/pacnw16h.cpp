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
        ll n, k; cin >> n >> k;
        vector<pll> pairs (k);
        for (int i = 0; i < k; i++){
            cin >> pairs[i].second >> pairs[i].first; pairs[i].first *= -1;
        }
        sort(pairs.begin(), pairs.end(), greater<>());
        ll dp[k];
        dp[0] = pairs[0].second * (-1) - pairs[0].first + 1;
        for (int i = 1; i < k; i++){
            //find the highest of smth with has end before smth else
            ll low = 0;
            ll high = i-1;
            ll mid;
            bool flag = false;
            while (low <= high){
                mid = low + (high - low)/2;
                if (pairs[mid].first * -1 < pairs[i].second && pairs[mid+1].first * -1 >= pairs[i].second){
                    flag = true;
                    break;
                }
                //pairs[mid]'s end is smaller than pair[i]'s start
                else if (pairs[mid].first * -1 < pairs[i].second){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
            ll otherOption;
            if (flag){
                otherOption = dp[mid] + pairs[i].second * -1 - pairs[i].first + 1;
            }
            else{
                otherOption = pairs[i].second * -1 - pairs[i].first + 1;
            }
            dp[i] = max(dp[i-1], otherOption);
        }
        cout << n - dp[k-1] << endl;
        //dp[i] is maximum up to this point
        //dp[i] = either dp[i-1] dp[ends before start of i] + end - begin + 1
    }
