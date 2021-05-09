#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
bool solve (string s){
    // key is that you want to try all the split points; don't choose one 
    //split on every single N possible because one of them will be the correct pivot
    if (s == "A"){
        return true;
    }
    if (s[0] == 'B' && s[s.length()-1] == 'S'){
        if (solve(s.substr(1, s.length()-2)))
            return true;
    }
    for (int i = 1; i < s.length(); i++){
        if (s[i] == 'N'){
            if (solve(s.substr(0, i)) && solve(s.substr(i+1)))
                return true;
        }
    }
    return false;
}
int main()
{
    string s;
    do {
        cin >> s;
        if (s == "X"){
            break;
        }
        if (solve(s) ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }while (true);

}

