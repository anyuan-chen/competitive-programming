#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    string s; cin >> s;

    char prev = '2';
    int groups = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == prev){
        }
        else{
            groups++;
        }
        prev = s[i];
    }
    if (prev == '0'){
        cout << groups-1;
    }
    else{
        cout << groups;
    }
}