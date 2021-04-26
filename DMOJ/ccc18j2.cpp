#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (b[i] == 'C' && a[i] == 'C')
        {
            cnt++;
        }
    }
    cout << cnt;
}
