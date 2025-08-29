class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int key = -1;
        bool targetFound = false;

        // First pass: check if target exists
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                key = i;
                targetFound = true;
                break;
            }
        }

        // Second pass: find insertion point if not found
        if (!targetFound) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > target) {
                    key = i;
                    break;
                }
            }
            // If target is bigger than all elements
            if (key == -1) {
                key = nums.size();
            }
        }

        return key;
    }
};