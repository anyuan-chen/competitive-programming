#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
bool visited [(int)1e6+1];
int main()
{
    int n, m; cin >> n >> m;
    vector<set<int>> adj (n+1, set<int>());
    for (int i = 0; i < m; i++){
        int a,b;cin >> a >> b;
        adj[a].insert(b);
    }
    int f, t; cin >> f >> t;
    queue<int> q;
    visited[f] = true;
    q.push(f);
    while (!q.empty()){
        int top = q.front(); q.pop();
        for (int i : adj[top]){
            if (!visited[i]){
                visited[i] = true;
                q.push(i);
            }
        }
    }
    if (visited[t]){
        cout << "yes" << endl;
        exit(0);
    }

    fill(visited, visited + (int)1e6+1, false);
    visited[t] = true;
    q.push(t);
    while (!q.empty()){
        int top = q.front(); q.pop();
        for (int i : adj[top]){
            if (!visited[i]){
                visited[i] = true;
                q.push(i);
            }
        }
    }
    if (visited[f]){
        cout << "no" << endl;
        exit(0);
    }
    else{
        cout << "unknown" << endl;
    }
}

