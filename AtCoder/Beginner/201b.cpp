#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<pair<int, string>> mountains (n);
    for (int i = 0; i < n; i++){
        int t1; string t2; cin >> t2 >> t1;
        mountains[i] = {t1,t2};
    }
    sort(mountains.begin(), mountains.end());
    cout << mountains[n-2].second;
}
