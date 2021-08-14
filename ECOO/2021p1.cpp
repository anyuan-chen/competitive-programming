#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    int min, interval, sent;
    cin >> min >> interval >> sent;
    int min1 = min + interval;
    int min2 = min1 + interval;
    int min3 = min2 + interval;
    if (sent > min3)
    {
        cout << "Who knows...";
    }
    else if (sent <= min1)
    {
        cout << min1;   
    }
    else if (sent <= min2)
    {
        cout << min2;
    }
    else if (sent <= min3)
    {
        cout << min3;
    }
}
