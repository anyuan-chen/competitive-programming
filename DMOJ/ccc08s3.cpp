
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    vector<pii> directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    vector<pii> directionsVertical = {{1,0}, {-1,0}};
    vector<pii> directionsHorizontal = {{0,1}, {0,-1}};


    int t; cin >> t;
    while (t--){
        int r, c; cin >> r >> c;
        char max [22][22];
        int dist[22][22];
        bool visited [22][22];
        for (int i = 0; i < 22; i++){
            for (int j = 0; j < 22; j++){
                dist[i][j] = 100000000;
                visited[i][j] = false;
                max[i][j] = '*';
            }
        }
        for (int i = 1; i <= r; i++){
            string s; cin >> s;
            for (int j = 1; j <= c; j++){
                max[i][j] = s[j-1];

            }
        }

        pii pos = {1,1};
        visited[pos.first][pos.second] = true;
        dist[pos.first][pos.second] = 1;
        pii goal = {r,c};
        queue<pii> q;
        q.push(pos);

        while (!q.empty()){
            pii top = q.front();
            q.pop();
            if (max[top.first][top.second] == '+'){
                for (pii dVec: directions){
                    if (!visited[top.first + dVec.first][top.second + dVec.second] && max[top.first + dVec.first][top.second + dVec.second] != '*'){
                        visited[top.first+dVec.first][ top.second + dVec.second] = true;
                        dist[top.first+dVec.first][ top.second + dVec.second] = dist[top.first][top.second] + 1;
                        q.push({top.first+dVec.first, top.second + dVec.second});
                    }
                }
            }
            else if (max[top.first][top.second] == '-'){
                for (pii dVec: directionsHorizontal){
                    if (!visited[top.first + dVec.first][top.second + dVec.second] && max[top.first + dVec.first][top.second + dVec.second] != '*'){
                        visited[top.first+dVec.first][ top.second + dVec.second] = true;
                        dist[top.first+dVec.first][ top.second + dVec.second] = dist[top.first][top.second] + 1;
                        q.push({top.first+dVec.first, top.second + dVec.second});
                    }
                }
            }
            else if (max[top.first][top.second] == '|'){
                for (pii dVec: directionsVertical){
                    if (!visited[top.first + dVec.first][top.second + dVec.second] && max[top.first + dVec.first][top.second + dVec.second] != '*'){
                        visited[top.first+dVec.first][ top.second + dVec.second] = true;
                        dist[top.first+dVec.first][ top.second + dVec.second] = dist[top.first][top.second] + 1;
                        q.push({top.first+dVec.first, top.second + dVec.second});
                    }
                }
            }
        }
        if (visited[goal.first][goal.second]){
            cout << dist[goal.first][goal.second] << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}

