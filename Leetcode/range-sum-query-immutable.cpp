#include <bits/stdc++.h>
using namespace std;
class NumArray
{
public:
    vector<int> psa;
    NumArray(vector<int> &nums)
    {
        psa.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            psa.push_back(psa[i - 1] + nums[i]);
        }
    }

    int sumRange(int left, int right)
    {
        if (left == 0)
        {
            return psa[right];
        }
        return psa[right] - psa[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */