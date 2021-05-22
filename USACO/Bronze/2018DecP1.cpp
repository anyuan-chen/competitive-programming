    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
    pii milk [3];
    int main()
    {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        freopen("mixmilk.in", "r", stdin);
        freopen("mixmilk.out", "w", stdout);
        cin >> milk[0].first >> milk[0].second >> milk[1].first >> milk[1].second >> milk[2].first >> milk[2].second;
        int one = 0; int two = 1;
        for (int pour = 0; pour < 100; pour++){
            int transferred = min(milk[one%3].second, milk[two%3].first - milk[two%3].second);
            milk[two%3].second += transferred;
            milk[one%3].second -= transferred;
            one++; two++;
        }
        cout << milk[0].second << endl;
        cout << milk[1].second << endl;
        cout << milk[2].second << endl;
    }
