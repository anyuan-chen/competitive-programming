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
    for (int zero = 0; zero <= 50; zero++)
    {
        bool success = true;
        for (int i = 0; i < s.length() / 2; i++)
        {
            if (s[i] != s[s.length() - i - 1])
            {
                success = false;
                break;
            }
        }
        if (success)
        {
            cout << "Yes" << endl;
            exit(0);
        }
        s = '0' + s;
    }
    cout << "No";
}
