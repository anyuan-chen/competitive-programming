#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
vector<vector<int>> adj (7, vector<int>());
bool visited [100001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    vector<ll> pog (n);
    for (int i = 0; i < n; i++){
        cin >> pog[i];
    }
    sort(pog.begin(), pog.end(), greater<>());
    ll total = 0;
    for (int i = 0; i < k; i++){
        total += pog[i];
    }
    cout << total;
}
