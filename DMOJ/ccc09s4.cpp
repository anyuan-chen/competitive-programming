#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int dist [5001];
bool visited[5001];

vector<vector<pii>> adj (5001);
int prices[5001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fill(prices, prices + 5001, 1000000000);
    fill(dist, dist + 5001, 1000000000);
    int n; cin >> n;
    int t; cin >> t;
    for (int i = 0; i < t; i++){
        int from, to , cost; cin >> from >> to >> cost;
        adj[from].push_back({cost,to});
        adj[to].push_back({cost,from});
    }
    int k; cin >> k;
    for (int i = 0; i < k; i++){
        int city, price; cin >> city >> price;
        prices[city] = price;
    }
    int startnode; cin >> startnode;
    dist[startnode] = 0;
    for (int i = 0; i <= 5000; i++){
        int v = -1;
        for (int j = 1; j <= 5000; j++){
            if (!visited[j] && (v == -1 || dist[j] < dist[v])){
                v = j;
            }
        }
        if (dist[v] == 1000000000){
            break;
        }
        visited[v] = true;
        for (auto edge : adj[v]){
            if (dist[v] + edge.first < dist[edge.second]){
                dist[edge.second] = dist[v] + edge.first;
            }
        }
    }

    int minimumCost = 1000000000;
    for (int i = 1; i <= 5000; i++){
        minimumCost = min(minimumCost, dist[i] + prices[i]);
    }
    cout << minimumCost << endl;
}
