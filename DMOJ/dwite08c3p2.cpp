#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    set<char> atoz;
    for (int i = 'a'; i <= 'z'; i++){
        atoz.insert(char(i));
    }
    for (int i = 'A'; i <= 'Z'; i++){
        atoz.insert(char(i));
    }
    int t = 5;
    while (t--){
        string line; getline(cin, line);
        string buffer;
        int cnt = 0;
        for (int i = 0; i < line.length(); i++){
            if (atoz.find(line[i]) == atoz.end()){
                if (buffer.length() > 3){
                    cnt++;
                }
                buffer ="";
            }
            else{
                buffer += line[i];
            }
        }
        if (buffer.length() >3 ){
            cnt++;
        }
        cout << cnt << endl;
    }
}