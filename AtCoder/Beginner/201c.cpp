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
    int counter = 0;
    for (int i = 0; i <= 9999; i++){
        string numstr = to_string(i);
        while (numstr.length() != 4){
            numstr = "0" + numstr;
        }
        bool flag[10]; fill(flag, flag  + 10, false);
        for (int j = 0; j <= 9; j++){
            if (numstr.find(to_string(j)) != string::npos){
                flag[j] = true;
            }
        }
        bool flag2 = true;
        for (int j = 0; j <= 9; j++){
            if (s[j] == 'o' && !flag[j]){
                flag2 = false;
                break;
            }
            else if (s[j] == 'x' && flag[j]){
                flag2 = false;
                break;
            }
        }
        if (flag2){
            counter++;
        }
    }
    cout << counter;
}
