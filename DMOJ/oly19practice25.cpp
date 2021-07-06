#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll grid [5005][5005];
int main()
{
    ll n, m, k; cin >> n >> m >> k;
    for (int i = 0; i < k; i++){
        ll x,y,X,Y; cin >> x >> y >> X >> Y;
        grid[y][x]++; grid[Y + 1][x]--; grid[y][X + 1]--; grid[Y+1][X+1]++;
    }
    for (int i = 1; i <= 5002; i++){
        for (int j = 1; j <= 5002; j++){
            grid[i][j] += grid[i-1][j] + grid[i][j-1] - grid[i-1][j-1];
        }
    }
    for (int i = 1; i <= 5002; i++){
        for (int j = 1; j <= 5002; j++){
            grid[j][i] += (grid[j-1][i] + grid[j][i-1] - grid[j-1][i-1]);
        }
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++){
        int a,b,c,d; cin >> a >> b >> c >> d;
        cout << grid[d][c] - grid[d][a-1] - grid [b-1][c] + grid[b-1][a-1] << endl;
    }
}