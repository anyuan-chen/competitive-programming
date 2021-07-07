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
    int t = 10;
    while (t--){
        int n; cin >> n;
        set<string> emails;
        for (int i = 0 ; i < n; i++){
            string s; cin >> s;
            string news;
            bool flag = false;
            bool plusFlag = false;
            for (char c : s){
                if (c == '@'){
                    flag = true;
                    news += c;
                }
                else if (c == '+'){
                    plusFlag = true;
                }
                else if (c == '.' && flag){
                    news += c;
                }
                else if (plusFlag && !flag){

                }

                else if (c == '.'){

                }
                else {
                    news += tolower(c);
                }
            }
            emails.insert(news);
        }
        cout << emails.size() << endl;
    }
}