#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int normal [101][101];
int main()
{
    int rowCount; cin >> rowCount;
    for (int i = 0; i < rowCount; i++){
        for (int j = 0; j <= i; j++){
            cin >> normal[i][j];
        }
    }
    for (int i = rowCount-1; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            normal[i][j] = max(normal[i][j] + normal[i+1][j], normal[i][j] + normal[i+1][j+1]);
        }
    }

    cout << normal[0][0];
}

