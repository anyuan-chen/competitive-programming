#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> questions(n + 1, -1);
    vector<int> professors(n + 1, -1);
    for (int i = 0; i < k; i++)
    {
        int prof, q, score;
        cin >> prof >> q >> score;
        if (score > questions[q])
        {
            questions[q] = score;
            professors[q] = prof;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << professors[i];
            exit(0);
        }
        cout << professors[i] << " ";
    }
}