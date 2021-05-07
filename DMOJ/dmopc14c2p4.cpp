#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
   int n; cin >> n;
   int arr [n+1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++){
       cin >> arr[i]; arr[i] += arr[i-1];
   }
   int q; cin >> q;
   for (int i = 0; i < q; i++){
       int l, r; cin >> l >> r; l++; r++;
       cout << arr[r] - arr[l-1] << endl;
   }
}

