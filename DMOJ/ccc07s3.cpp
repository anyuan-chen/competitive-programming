#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
vector<vector<int>> adj (10001, vector<int>());
bool visited[10001];
int dfs (int i, int goal, int counter){
    if (i == goal){
        return counter;
    }
    for (int f : adj[i]){
        if (!visited[f]){
            visited[f] = true;
            return dfs(f, goal, counter + 1);
        }
    }
    return 0;
}
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    int s1, s2; cin >> s1 >> s2;
    while (s1 != 0 || s2 != 0){
        fill(visited, visited + 10000, false);
        int b1 = dfs(s1, s2, 0);
        fill(visited, visited + 10000, false);
        int b2 = dfs(s2, s1, 0);
        if (b1 != 0 && b2 != 0){
            cout << "Yes" << " " << b1-1 << endl;
        }
        else{
            cout << "No" << endl;
        }
        cin >> s1 >> s2;
    }
}

