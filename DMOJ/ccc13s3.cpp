#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
vector<pii> games;

int t;
int solve(vector<int>curScores, int curMatchIndex) {
    int score = 0;
    if (curMatchIndex == games.size()){
        for (int i = 1; i <= 4; i++){
            if (curScores[t] <= curScores[i] && i != t){
                return 0;
            }
        }
        return 1;
    }
    else{
        curScores[games[curMatchIndex].first] += 3;
        score += solve(curScores, curMatchIndex + 1);
        curScores[games[curMatchIndex].first] -= 3;
        curScores[games[curMatchIndex].second] += 3;
        score += solve(curScores, curMatchIndex + 1);
        curScores[games[curMatchIndex].second] -= 2;
        curScores[games[curMatchIndex].first] += 1;
        score += solve(curScores, curMatchIndex + 1);
    }
    return score;
}

int main()
{
    cin >> t;
    for (int i = 1; i <= 4; i++){
        for (int j = i+1; j <= 4; j++){
            games.emplace_back(i,j);
        }
    }
    vector<int>scores (5,0);
    int gamesPlayed; cin >> gamesPlayed;
    for (int i = 0; i < gamesPlayed; i++){
        int t1,t2,s1,s2; cin >> t1 >> t2 >> s1 >> s2;
        pii match = {min(t1,t2),max(t1,t2)};
        games.erase(remove(games.begin(), games.end(), match), games.end());
        if (s1 > s2){
            scores[t1] += 3;
        }
        else if (s2 > s1){
            scores [t2] += 3;
        }
        else{
            scores[t1]++; scores[t2]++;
        }
    }

    cout << solve(scores, 0);
}
