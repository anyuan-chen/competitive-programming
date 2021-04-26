#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

bool visited[10001];
ll dist[10001];
vector<vector<int>> adj(10001, vector<int>());

int main()
{
    fill(dist, dist + 10001, 1000000000);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int pages;
        cin >> pages;
        for (int j = 0; j < pages; j++)
        {
            int number;
            cin >> number;
            adj[i].push_back(number);
        }
    }
    queue<int> q;
    q.push(1);
    dist[1] = 1;
    visited[1] = true;
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        for (int i : adj[cur])
        {
            if (!visited[i])
            {
                q.push(i);
                dist[i] = dist[cur] + 1;
                visited[i] = true;
            }
        }
    }
    bool letter = false;
    ll minElement = 1e14 + 1;
    for (int i = 1; i <= n; i++)
    {
        if (adj[i].empty())
        {
            minElement = min(minElement, dist[i]);
        }
        if (!visited[i] && !letter)
        {
            cout << "N" << endl;
            letter = true;
        }
        if (i == n && !letter)
        {
            cout << "Y" << endl;
        }
    }

    cout << minElement;
}
