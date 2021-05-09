#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
map<pair<pii, int>, int> st;
int solve(int slices, int people, int minimum){
    int total = 0;
    if (people == 1 && slices >= minimum){return 1;}
    else if (people == 1){return 0;}

    for (int i = minimum; slices/i >= people && i < slices; i++){

        if (st.find({{slices-i, people-1}, i}) == st.end()){
            st[{{slices - i, people - 1}, i}] = solve(slices - i, people - 1, i);
        }

        total += st[{{slices - i, people - 1}, i}];
    }
    return total;
}
int main()
{
    int n; cin >> n;
    int k; cin >> k;
    cout << solve (n, k, 1);
}

