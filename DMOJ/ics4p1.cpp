#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

string s;
vector<string> solve(vector<string> order, set<char> lettersLeft)
{
    vector<string> stringCollection;
    if (lettersLeft.empty())
    {
        string completedString;
        for (string letter : order)
        {
            completedString += letter;
        }
        stringCollection.push_back(completedString);
    }
    else
    {
        for (char letter : lettersLeft)
        {
            vector<string> orderCopy;
            set<char> lettersLeftCopy = lettersLeft;
            orderCopy.push_back(to_string(letter));
            lettersLeftCopy.erase(letter);
            vector<string> result = solve(orderCopy, lettersLeftCopy);
            stringCollection.insert(stringCollection.end(), result.begin(), result.end());
        }
    }
    return stringCollection;
}
int main()
{
    cin >> s;
    set<char> letters;
    for (int i = 0; i < s.length(); i++)
    {
        letters.insert(s[i]);
    }
    vector<string> vec = solve(vector<string>(), letters);
    sort(vec.begin(), vec.end());
    for (int i = 0; i < s.length(); i++)
    {
        cout << vec[i] << endl;
    }
}
