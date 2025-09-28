class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int perm = 0;
        sort(nums.begin(), nums.end());
        for (int i = nums.size() - 1; i >= 2; --i) {
            if (nums[i - 2] + nums[i - 1] > nums[i]) {
                int sum = nums[i - 2] + nums[i - 1] + nums[i];
                perm = max(perm,sum);
            }
        }
        return perm;
    }
};