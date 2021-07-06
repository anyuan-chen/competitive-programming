#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    int low = 1;
    int high = 2 * 1e9;
    while (low <= high){
        int mid = low + (high - low)/2;
        cout << mid << endl;
        string output; cin >> output;
        if (output == "OK"){
            exit(0);
        }
        else if (output == "FLOATS"){
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
}