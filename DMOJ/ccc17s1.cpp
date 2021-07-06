#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    int n; cin >> n;
    vector<int> swifts (n);
    vector<int> semphores(n);
    int swTotal = 0;
    int seTotal = 0;
    for (int i = 0; i < n; i++){
        cin >> swifts[i];
        swTotal += swifts[i];
    }
    for (int i = 0; i < n; i++){
        cin >> semphores[i];
        seTotal += semphores[i];
    }
    for (int i = n-1; i >= 0; i--){
        if (swTotal == seTotal){
            cout << i+1 << endl;
            exit(0);
        }
        swTotal -= swifts[i];
        seTotal -= semphores[i];
    }
    cout << 0 << endl;
}