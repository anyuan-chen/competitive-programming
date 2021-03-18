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
    cin.ignore();
    int tcount = 0;
    int scount = 0;
    string words;
    for (int i = 0; i < n; i++)
    {
        getline(cin, words);
        if (words.length() > 100)
        {
            return 0;
        }
        for (char c : words)
        {
            if (c == 'T' || c == 't')
            {
                tcount++;
            }
            if (c == 'S' || c == 's')
            {
                scount++;
            }
        }
    }
    if (tcount > scount)
    {
        cout << "English" << endl;
    }
    else
    {
        cout << "French" << endl;
    }
}
