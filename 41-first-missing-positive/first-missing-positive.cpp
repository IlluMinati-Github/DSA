class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int need = 1;  

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < need) {
                continue; 
            }
            if (nums[i] == need) {
                need++;
            }
        }

        return need;
    }
};
