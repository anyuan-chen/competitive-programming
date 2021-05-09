#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
vector<vector<int>> adj (26, vector<int>());
bool visited[26];
bool dfs (int now, int result){
    if (now == result){
        return true;
    }
    for (int num : adj[now]){
        if (!visited[num]){
            visited[num] = true;
            if (dfs(num, result))
                return true;
        }
    }
    return false;
}
string edge;
vector<pii> edges;
int main()
{
    do {
        cin >> edge;
        if (edge == "**"){
            break;
        }
        adj[edge[0]-'A'].push_back(edge[1]-'A');
        adj[edge[1]-'A'].push_back(edge[0]-'A');
        edges.push_back({edge[0]-'A',edge[1]-'A'});
        //edges.emplace_back(edge[1]-'A',edge[0]-'A');
    }while (true);

    int disconnecting = 0;
    for (pii edg : edges){
        fill(visited, visited + 26, false);
        adj[edg.first].erase(remove(adj[edg.first].begin(), adj[edg.first].end(), edg.second), adj[edg.first].end());
        adj[edg.second].erase(remove(adj[edg.second].begin(), adj[edg.second].end(), edg.first), adj[edg.second].end());
        visited[0] = true;
        if (!dfs(0,1)){
            cout << (char) (edg.first + 'A') << (char) (edg.second + 'A') << endl;
            disconnecting++;
        }
        adj[edg.first].push_back(edg.second);
        adj[edg.second].push_back(edg.first);
    }
    cout << "There are " << disconnecting << " disconnecting roads." << endl;
}
