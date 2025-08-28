class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_set<int> uniq(nums.begin(), nums.end());
        long sum_unique = 0, sum_all = 0;
        for (int x : uniq) sum_unique += x;
        for (int x : nums) sum_all += x;
        return 2 * sum_unique - sum_all;
    }
};