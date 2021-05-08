#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int freq[2001];
int lengths[4003];
int main()
{
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int tmp; cin >> tmp; freq[tmp]++;
    }
    for (int i = 0; i <= 2000; i++){
        for (int j = i+1; j <= 2000; j++){
            lengths[i + j] += min(freq[i], freq[j]);
        }
    }
    for (int i = 0; i <= 2000; i++){
        lengths[i+i] += freq[i]/2;
    }
    cout << *max_element(lengths, lengths + 4003) << " ";
    sort(lengths, lengths + 4003, greater<int>());
    int cnt = 0;
    for (int i = 0; i < 4003; i++){
        if (lengths[i] != lengths[0]){
            break;
        }
        else{
            cnt++;
        }
    }
    cout << cnt;
}

