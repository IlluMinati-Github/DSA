class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int key = -1;
        bool targetFound = false;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                key = i;
                targetFound = true;
                break;
            }
        }

        if (!targetFound) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > target) {
                    key = i;
                    break;
                }
            }
            if (key == -1) {
                key = nums.size();
            }
        }

        return key;
    }
};