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
        freopen("square.in", "r", stdin);
        freopen("square.out", "w", stdout);
        int x1, y1 ,x2, y2;
        int x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        int minx = min({x1,x2,x3,x4});
        int miny = min({y1,y2,y3,y4});
        int maxx = max({x1,x2,x3,x4});
        int maxy = max({y1,y2,y3,y4});
        cout << max((maxy - miny), (maxx - minx)) * max((maxy - miny), (maxx - minx));
    }
