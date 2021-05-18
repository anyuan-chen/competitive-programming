    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;
    vector<vector<int>> adj ((int)1e4+2);
    pii dfs (int root, int parent, int depth){
        pii mx = {0,0};
        if (adj[root].size() == 1 && parent == adj[root][0]){
            return {depth, root};
        }
        for (int i : adj[root]){
            if (i != parent){
                mx = max(mx, dfs(i, root, depth+1));
            }
        }
        return mx;
    }
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n; cin >> n;
        for (int i = 0; i < n-1; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        pii m = dfs(1,0,0);
        pii second = dfs(m.second, 0, 0);

        cout << second.first;
    }
