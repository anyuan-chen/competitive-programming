    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    typedef long double ld;
    typedef pair<int, int> pii;
    typedef pair<ll, ll> pll;

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string s1, s2; cin >> s1 >> s2;
        int final = min(s2.length(), s1.length());
        for (int i = 0; i < min(s1.length(), s2.length()); i++){
            if (s1[i] != s2[i]){
                final = i;
                break;
            }
        }
        cout << (s1.length() - final) + (s2.length() - final) << endl;
    }
