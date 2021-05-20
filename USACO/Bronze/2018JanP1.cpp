    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
    int covered(int cornerx, int cornery, int x1, int x2, int y1, int y2){
        if (cornerx >= x1 && cornerx <= x2 && cornery >= y1 && cornery <= y2){
            return 1;
        }
        return 0;
    }
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        freopen("billboard.in", "r", stdin);
        freopen("billboard.out", "w", stdout);
        int x1, y1 ,x2, y2;
        int x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        int coverCounter = 0;
        coverCounter += covered(x1, y1, x3, x4, y3, y4);
        coverCounter += covered(x2, y2, x3, x4, y3, y4);
        coverCounter += covered(x1, y2, x3, x4, y3, y4);
        coverCounter += covered(x2, y1, x3, x4, y3, y4);
        if (coverCounter == 4){
            cout << 0 << endl;
        }
        else if (coverCounter < 2){
            cout << (x2-x1) * (y2-y1) << endl;
        }
        else{
            int xintersect = min(x2, x4) - max(x1, x3);
            int yintersect = min(y2, y4) - max(y1, y3);
            cout << (x2-x1) * (y2-y1) - xintersect * yintersect << endl;
        }

    }
