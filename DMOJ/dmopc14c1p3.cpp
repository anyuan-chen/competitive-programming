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
    cout.tie(0);

    double total = 0;
    int in; cin >> in;
    int tmp;
    for (int i = 0; i < in; i++){
        cin >> tmp; total += tmp;
    }
    int nw; cin >> nw;
    for (int i = in+1; i < nw+in+1; i++){
        cin >> tmp; total += tmp;
        cout  <<  (total/(i)) << endl;
    }
}
