#include <algorithm>
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        if (nums.empty()) return result;

        sort(nums.begin(), nums.end()); // sort the array

        int n = nums.size();
        int count = 1; // count current number

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                if (count > n / 3) {
                    result.push_back(nums[i - 1]);
                }
                count = 1; // reset count for new number
            }
        }

        // check the last number
        if (count > n / 3) {
            result.push_back(nums[n - 1]);
        }

        return result;
    }
};
