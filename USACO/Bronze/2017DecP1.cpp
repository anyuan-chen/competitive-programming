    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;

    struct rect {
        int x1,x2,y1,y2;
        int area() {
            return (x2-x1) * (y2-y1);
        }
    };
    int intersection(rect r1, rect r2){
        int x = max(0, min(r1.x2, r2.x2) - max(r1.x1, r2.x1));
        int y = max(0, min(r1.y2, r2.y2) - max(r1.y1, r2.y1));
        return  x * y;
    }
    rect arr[3];
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        freopen("billboard.in", "r", stdin);
        freopen("billboard.out", "w", stdout);
        for (int i = 0; i < 3; i++){
            cin >> arr[i].x1 >> arr[i].y1 >> arr[i].x2 >> arr[i].y2;
        }
        cout << arr[0].area() + arr[1].area() - intersection(arr[0], arr[2]) - intersection(arr[1], arr[2]);
    }
