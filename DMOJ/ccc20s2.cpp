#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int grid [1001][1001];
bool visited[1001][1001];

int main()
{   // n -> (x,y)
    // x*y -> (x,y)
    vector<vector<pii>> adj (1000001);
    int m, n; cin >> m >> n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> grid[i][j];
            adj[i*j].push_back({i,j});
        }
    }
    queue<pii> q;
    q.push({1,1});
    visited[1][1] = true;
    while (!q.empty()){
        pii front = q.front(); q.pop();
        for (pii next : adj[grid[front.first][front.second]]){
            int x1 = next.first; int x2 = next.second;
            if (!visited[x1][x2]){
                visited[x1][x2] = true;
                q.push({x1,x2});
            }
        }
    }

    if (visited[m][n]){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}
