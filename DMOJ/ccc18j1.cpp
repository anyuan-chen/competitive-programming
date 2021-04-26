#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b == c && (a == 8 || a == 9) && (d == 8 || d == 9))
    {
        cout << "ignore";
    }
    else
    {
        cout << "answer";
    }
}
