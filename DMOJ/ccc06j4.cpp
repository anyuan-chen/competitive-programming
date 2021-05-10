#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
vector<int> answers;
vector<set<int>> adj (8, set<int>());
int indegree[8];
bool visited[8];
int main()
{
    int n1, n2;
    adj[1].insert(7);indegree[7]++; adj[1].insert(4); indegree[4]++;adj[2].insert(1);indegree[1]++;adj[3].insert(4);indegree[4]++;adj[3].insert(5);indegree[5]++;
    do {
        cin >> n1 >> n2;
        if (n1 == 0 && n2 == 0){
            break;
        }
        adj[n1].insert(n2);
        //n1 before n2
        indegree[n2]++;
    } while (true);

    for (int time = 1; time <= 2000; time++){
        for (int i = 1; i <= 7; i++){
            if (indegree[i] == 0 && !visited[i]){
                answers.push_back(i);
                visited[i] = true;
                for (int j : adj[i]){
                    indegree[j]--;
                }
                break;
            }
        }
    }

    for (int i  = 1; i <= 7; i++){
        if (indegree[i] > 0){
            cout << "Cannot complete these tasks. Going to bed." << endl;
            exit(0);
        }
    }
    for (int i = 0; i < answers.size(); i++){
        cout << answers[i] << " ";
    }
}

