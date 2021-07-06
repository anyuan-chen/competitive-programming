#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll psa[(int)1e7 + 2];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int s, f; cin >> s >> f;
        psa[s] ++; psa[f]--;
    }
    ll mx = -1;
    for (int i = 0; i <= 1e7+1; i++){
        psa[i] += psa[i-1];
        mx = max(mx, psa[i]);
    }
    cout << mx << endl;

}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int main()
{
    int n; cin >> n;
    vector<int> diff (1e7+1, 0);
    for (int i = 0; i < n; i++) {
        int st, ed;
        cin >> st >> ed;
        diff[st]++;
        diff[ed]--;
    }
    int max_element = 0;
    for (int i = 1; i < diff.size(); i++){
        diff[i] += diff[i-1];
        max_element = max(max_element, diff[i]);
    }
    cout << max_element << endl;

}