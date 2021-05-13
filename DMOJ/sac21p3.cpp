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

    int n, p; cin >> n >> p;
    vector<pair<double, string>> vec;
    for (int i = 0; i < n; i++){
        string name; double math, cs, english; cin >> name >> math >> cs >> english;
        double score = (4 * sqrt(math)) + (3 * pow(cs, p)) - (4 * english);
        vec.emplace_back(score, name);
    }
    sort(vec.begin(), vec.end());
    cout << vec[vec.size() -1].second << " " << (long long )(floor(vec[vec.size() -1].first)) << endl;
    cout << vec[0].second << " " << (long long)(floor(vec[0].first) )<< endl;
}
