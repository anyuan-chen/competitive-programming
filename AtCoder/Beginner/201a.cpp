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
    int arr[3];
    for (int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    if (arr[2] - arr[1] == arr[1] - arr[0]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}
