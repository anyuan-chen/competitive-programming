#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int main()
{
    int gates; cin >> gates;
    int planes; cin >> planes;
    set<int> available;
    for (int i = 1; i <= gates; i++){
        available.insert(-i);
    }
    for (int i = 0; i < planes; i++){
        int maxGate; cin >> maxGate; maxGate *= -1;
        auto it = available.lower_bound(maxGate);
        if (it == available.end()){
            cout << i << endl;
            exit(0);
        }
        available.erase(*it);
    }
    cout << planes;
}

