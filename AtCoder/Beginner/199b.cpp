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
    int minA = 1001; int minB = 0;
    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp; minB = max(minB, tmp);
    }
    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp; minA = min(minA, tmp);
    }
    cout << max(0, minA - minB + 1) << endl;
}
