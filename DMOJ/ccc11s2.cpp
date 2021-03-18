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
    vector<string> student(n);
    vector<string> teacher(n);
    for (int i = 0; i < n; i++)
    {
        cin >> student[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> teacher[i];
    }
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (teacher[i] == student[i])
        {
            cnt++;
        }
    }
    cout << cnt;
}
