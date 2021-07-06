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
    int r, c; cin >> r >> c;
    set<int> row;
    set<int> col;
    for (int i = 0; i < r; i++){
        string s; cin >> s;
        for (int j = 0; j < c; j++){
            if (s[j] == 'X'){
                row.insert(i + 1);
                col.insert(j + 1);
            }
        }
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++){
        int x, y; cin >> x >> y;
        if (row.find(y) != row.end() || col.find(x) != col.end()){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }
    }
}