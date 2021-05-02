#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    string s;
    cin >> s;
    set<char> vowel = {'A', 'E', 'I', 'O', 'U'};
    string binaryString;
    for (int i = 0; i < s.length(); i++)
    {
        if (vowel.find(s[i]) != vowel.end())
        {
            binaryString += '0';
        }
        else
        {
            binaryString += '1';
        }
    }
    set<int> spaces;
    for (int i = 1; i < s.length(); i++)
    {
        if (binaryString[i] != binaryString[i - 1])
        {
        }
        else
        {
            spaces.insert(i);
        }
    }
    //    for (int i : spaces){
    //        cout << i << endl;
    //    }
    int i = 0;
    while (i != s.length())
    {
        if (spaces.find(i) != spaces.end())
        {
            cout << " ";
        }
        cout << s[i];
        i++;
    }
}
