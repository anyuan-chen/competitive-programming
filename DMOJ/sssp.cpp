#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int dist [1001];
bool visited[1001];

vector<vector<pii>> adj (1001);
int main()
{
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++){
        int u, v, w; cin >> u >> v >> w;
        adj[u].push_back({w,v});
        adj[v].push_back({w,u});
    }
    fill(dist, dist + 1001, 10000000);
    priority_queue<pii> q;
    q.push({0,1});
    dist[1] = 0;
    visited[1] = true;
    while (!q.empty()) {
        pii top = q.top();
        q.pop();
        for (pii edge : adj[top.second]) {
            if (!visited[edge.second] && dist[edge.second] > dist[top.second] + edge.first) {
                dist[edge.second] = dist[top.second] + edge.first;
                q.push({edge});
            }
        }
    }
    for (int i = 1; i <= n; i++){
        if (dist[i] != 10000000){
            cout << dist[i] << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}
