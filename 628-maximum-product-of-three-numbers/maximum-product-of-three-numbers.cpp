class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int maximum = 0;

        if (nums.size() == 3) {
            maximum = nums[0] * nums[1] * nums[2];
        } else {
            int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
            int min1 = INT_MAX, min2 = INT_MAX;

            for (int i = 0; i < nums.size(); i++) {
                int num = nums[i];

                // Top 3 maximums
                if (num >= max1) {
                    max3 = max2;
                    max2 = max1;
                    max1 = num;
                } else if (num >= max2) {
                    max3 = max2;
                    max2 = num;
                } else if (num >= max3) {
                    max3 = num;
                }

                // Bottom 2 minimums
                if (num <= min1) {
                    min2 = min1;
                    min1 = num;
                } else if (num <= min2) {
                    min2 = num;
                }
            }

            maximum = max(max1 * max2 * max3, max1 * min1 * min2);
        }

        return maximum;
    }
};
