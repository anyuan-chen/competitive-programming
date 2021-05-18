#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int adj [5][5];
bool visited [5];
void dfs (int root, int parent){
    for (int i = 1; i <= 4; i++){
        if (adj[root][i] == 1){
            if (visited[i] && parent != i){
                cout << "No" << endl;
                exit(0);
            }
            else if (visited[i]){
            }
            else{
                visited[i] = true;
                dfs(i, root);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 1; i <= 4; i++){
        for (int j = 1; j <= 4; j++){
            cin >> adj[i][j];
        }
    }
    visited[1] = true;
    dfs(1, 0);
    for (int i = 1; i <= 4; i++){
        if (!visited[i]){
            cout << "No" << endl;
            exit(0);
        }
    }
    cout << "Yes" << endl;
}
