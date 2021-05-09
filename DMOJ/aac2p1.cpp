#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int alpha[26];
int main()
{
    ll n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < n; i++){
        alpha[s[i] - 'a']++;
    }
    int total = 0;
    for (int i = 0; i < 26; i++){
        if (alpha[i]%2 == 1){
            total++;
        }
    }
    cout << max(total, 1);
}
