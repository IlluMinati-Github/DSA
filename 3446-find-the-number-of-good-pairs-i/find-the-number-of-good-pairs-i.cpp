class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int count = 0;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                int a = nums1[i];
                int b = nums2[j] * k;
                if (a % b == 0)
                    count++;
            }
        }
        return count;
    }
};