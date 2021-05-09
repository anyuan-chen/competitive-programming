#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main()
{
    set<pii> st;
    vector<pair<string, int>> instructions;
    instructions.emplace_back("d",2);
    instructions.emplace_back("r",3);
    instructions.emplace_back("d",2);
    instructions.emplace_back("r",2);
    instructions.emplace_back("u",2);
    instructions.emplace_back("r",2);
    instructions.emplace_back("d",4);
    instructions.emplace_back("l",8);
    instructions.emplace_back("u",2);

    pii cur = {0,-1};
    st.insert(cur);

    for (int i = 0; i < instructions.size(); i++){
        if (instructions[i].first == "d"){
            bool danger = false;
            for (int j = 0; j < instructions[i].second; j++){
                cur = {cur.first, cur.second-1};
                int sizebefore = st.size();
                st.insert(cur);
                int after = st.size();
                if (sizebefore == after){
                    danger = true;
                }
            }
            if (danger){
                cout << cur.first << " " << cur.second <<  " DANGER" << endl;
                exit(0);
            }
            else if (i > 8){
                cout << cur.first << " " << cur.second << " safe" << endl;
            }
        }
        else if (instructions[i].first == "u"){
            bool danger = false;
            for (int j = 0; j < instructions[i].second; j++){
                cur = {cur.first, cur.second+1};
                int sizebefore = st.size();
                st.insert(cur);
                int after = st.size();
                if (sizebefore == after){
                    danger = true;
                }
            }
            if (danger){
                cout << cur.first << " " << cur.second <<  " DANGER" << endl;
                exit(0);
            }
            if (i > 8){
                cout << cur.first << " " << cur.second << " safe"<< endl;
            }
        }
        else if (instructions[i].first == "l"){
            bool danger = false;
            for (int j = 0; j < instructions[i].second; j++){
                cur = {cur.first-1, cur.second};
                int sizebefore = st.size();
                st.insert(cur);
                int after = st.size();
                if (sizebefore == after){
                    danger = true;
                }
            }
            if (danger){
                cout << cur.first << " " << cur.second <<  " DANGER"<< endl;
                exit(0);
            }
            if (i > 8){
                cout << cur.first << " " << cur.second << " safe"<< endl;
            }
        }
        else if (instructions[i].first == "r"){
            bool danger = false;
            for (int j = 0; j < instructions[i].second; j++){
                cur = {cur.first+1, cur.second};
                int sizebefore = st.size();
                st.insert(cur);
                int after = st.size();
                if (sizebefore == after){
                    danger = true;
                }
            }
            if (danger){
                cout << cur.first << " " << cur.second <<  " DANGER"<< endl;
                exit(0);
            }
            if (i > 8){
                cout << cur.first << " " << cur.second << " safe"<< endl;
            }
        }
    }
    string dir; int by;
    do{
        cin >> dir >> by;
        if (dir == "d"){
            bool danger = false;
            for (int j = 0; j < by; j++){
                cur = {cur.first, cur.second-1};
                int sizebefore = st.size();
                st.insert(cur);
                int after = st.size();
                if (sizebefore == after){
                    danger = true;
                }
            }
            if (danger){
                cout << cur.first << " " << cur.second <<  " DANGER" << endl;
                exit(0);
            }
            else {
                cout << cur.first << " " << cur.second << " safe" << endl;
            }
        }
        else if (dir == "u"){
            bool danger = false;
            for (int j = 0; j < by; j++){
                cur = {cur.first, cur.second+1};
                int sizebefore = st.size();
                st.insert(cur);
                int after = st.size();
                if (sizebefore == after){
                    danger = true;
                }
            }
            if (danger){
                cout << cur.first << " " << cur.second <<  " DANGER" << endl;
                exit(0);
            }
            else {
                cout << cur.first << " " << cur.second << " safe"<< endl;
            }
        }
        else if (dir == "l"){
            bool danger = false;
            for (int j = 0; j < by; j++){
                cur = {cur.first-1, cur.second};
                int sizebefore = st.size();
                st.insert(cur);
                int after = st.size();
                if (sizebefore == after){
                    danger = true;
                }
            }
            if (danger){
                cout << cur.first << " " << cur.second <<  " DANGER"<< endl;
                exit(0);
            }
            else {
                cout << cur.first << " " << cur.second << " safe"<< endl;
            }
        }
        else if (dir== "r"){
            bool danger = false;
            for (int j = 0; j < by; j++){
                cur = {cur.first+1, cur.second};
                int sizebefore = st.size();
                st.insert(cur);
                int after = st.size();
                if (sizebefore == after){
                    danger = true;
                }
            }
            if (danger){
                cout << cur.first << " " << cur.second <<  " DANGER"<< endl;
                exit(0);
            }
            else {
                cout << cur.first << " " << cur.second << " safe"<< endl;
            }
        }
        if (dir == "q"){
            break;
        }
        instructions.emplace_back(dir,by);
    }while (true);

}

