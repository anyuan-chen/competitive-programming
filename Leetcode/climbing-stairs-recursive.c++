#include <bits/stdc++.h>
class Solution
{
public:
    std::map<int, int> mp;
    int climbStairs(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        else if (n < 0)
        {
            return 0;
        }
        else if (mp.find(n) == mp.end())
        {
            mp[n] = climbStairs(n - 1) + climbStairs(n - 2);
        }
        return mp[n];
    }
};