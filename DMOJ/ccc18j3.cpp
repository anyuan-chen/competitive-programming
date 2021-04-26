#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    vector<int> position(5, 0);
    for (int i = 1; i <= 4; i++)
    {
        cin >> position[i];
        position[i] += position[i - 1];
    }
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            cout << abs(position[j] - position[i]) << " ";
        }
        cout << endl;
    }
}
