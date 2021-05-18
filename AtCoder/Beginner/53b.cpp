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
    string s; cin >> s;
    int firstA = 10000000;
    int lastZ =  0;
    bool flag1 = false;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'A' && !flag1){
            firstA = i;
            flag1 = true;
        }
        if (s[i] == 'Z'){
            lastZ = i;
        }
    }
    cout << lastZ - firstA + 1;
}
