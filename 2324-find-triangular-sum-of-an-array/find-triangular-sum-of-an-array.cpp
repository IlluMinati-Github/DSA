class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while (nums.size() > 1) {
            vector<int> result;
            for (int i = 0; i < nums.size() - 1; i++) {
                result.push_back((nums[i] + nums[i + 1]) % 10);
            }
            nums = result; 
        }
        return nums[0];
    }
};
