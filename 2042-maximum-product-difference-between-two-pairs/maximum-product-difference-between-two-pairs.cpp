class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int a = nums[n - 1];
        int b = nums[n - 2];
        int c = nums[0];
        int d = nums[1];
        int x = (a * b) - (c * d);
        return x;
    }
};