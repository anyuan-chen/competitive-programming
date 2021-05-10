#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int main()
{
    int n;  cin >> n;
    for (int i = 0; i < n; i++){
        vector<int> answers;
        int m; cin >> m;
        for (int div = 2; div <= sqrt(m); div++){
            if (m%div == 0){
                m /= div;
                answers.push_back(div);
                div--;
            }
        }
        if (m != 1){
            answers.push_back(m);
        }
        for (int num : answers){
            cout << num << " ";
        }
        cout << endl;
    }
}

