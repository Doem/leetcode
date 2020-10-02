/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> set;

        set[nums[0]] = 0;
        for (int i = 1; i < nums.size(); ++i) {
            auto it = set.find(target - nums[i]);
            if (it != set.end())
                return {it->second, i};
            set[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

