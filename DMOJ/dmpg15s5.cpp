#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int main()
{
    int n, m; cin >> n >> m;
    //we set 0 to black, 1 to white
    vector<vector<short>> grid (n + 5, vector<short>(n + 5, 0));
    for (int i = 0; i < m; i++){
        int x, y, w, h; cin >> x >> y >> w >> h; x++; y++;
        //flip a rectangle top left (x,y) bottom right (x + w, y + h)
        grid[x][y] ++;
        grid[x + w][y]--;
        grid[x][y + h]--;
        grid[x + w][y + h]++;
    }
    ll total = 0;
    for (int i = 1; i <= n + 1; i++){
        for (int j = 1; j <= n + 1; j++){
            grid[i][j] += grid[i-1][j] + grid [i][j-1] - grid[i-1][j-1];
        }
    }
    for (int i = 1; i <= n ; i++){
        for (int j = 1; j <= n ; j++){
            if ((grid[i][j] & 1) == 1){
                total++;
            }
        }
    }
    cout << total << endl;
}