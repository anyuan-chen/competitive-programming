#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int dist[51];
bool visited[51];
vector<set<int>> adj = {{}, {6}, {6}, {4,5,6,15}, {3,5,6}, {3,4,6}, {1,2,3,4,5,7}, {6,8}, {7,9}, {8,10,12}, {9,11}, {10,12}, {9,11,13}, {12,14,15}, {13}, {3,13}, {17,18}, {16,18}, {16,17}};
void connect(int p1, int p2){
    adj[p1].insert(p2);
    adj[p2].insert(p1);
}
void disconnect(int p1, int p2){
    adj[p1].erase(p2);
    adj[p2].erase(p1);
}
int fof (int x){
    set<int> inters;
    set<int> nonos;
    nonos.insert(x);
    for (int i : adj[x]){
        nonos.insert(i);
        for (int j : adj[i]){
            inters.insert(j);
        }
    }
    int amt = inters.size();
    for (int i : nonos){
        if (inters.find(i) != inters.end()){
            amt--;
        }
    }
    return amt;
}
void dos(int x, int y){
    fill (dist, dist + 51, 1000000);
    fill(visited, visited + 51, false);
    queue<int> q;
    q.push(x);
    dist[x] = 0;
    while (!q.empty()){
        int top = q.front(); q.pop();
        for (int i : adj[top]){
            if (!visited[i]){
                visited[i] = true;
                dist[i] = dist[top] + 1;
                q.push(i);
            }
        }
    }
    if (dist[y] == 1000000){
        cout << "Not connected" << endl;
    }
    else {cout << dist[y] << endl;}
}
int main()
{
    adj.resize(51,set<int>());
    string action;
    do{
        cin >> action;
        if (action == "q"){
            break;
        }
        if (action == "i"){
            int f1, f2; cin >> f1 >> f2;
            connect(f1,f2);
        }
        if (action == "d"){
            int f1, f2; cin >> f1 >> f2;
            disconnect(f1,f2);
        }
        if (action == "n"){
            int x; cin >> x;
            cout << adj[x].size() << endl;
        }
        if (action == "f"){
            int x; cin >> x;
            cout << fof(x) << endl;
        }
        if (action == "s"){
            int x, y; cin >> x >> y;
            dos(x,y);
        }
    }while (true);
}

