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
    if (s.find(".") == string::npos)
    {
        cout << s << endl;
    }
    else
    {
        cout << s.substr(0, s.find(".")) << endl;
    }
}
