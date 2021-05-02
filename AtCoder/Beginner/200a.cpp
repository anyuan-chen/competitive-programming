#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    string s;
    cin >> s;
    int amt = 0;
    for (int i = 0; i < s.length() - 3; i++)
    {
        if (s.substr(i, 4) == "ZONe")
        {
            amt++;
        }
    }
    cout << amt;
}
