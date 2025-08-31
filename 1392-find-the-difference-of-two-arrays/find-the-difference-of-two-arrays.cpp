class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result(2);

        for (int i = 0; i < nums1.size(); i++) {
            bool seen = false;
            for (int k = 0; k < i; k++) {
                if (nums1[k] == nums1[i]) {
                    seen = true;
                    break;
                }
            }
            if (seen) continue;

            bool present = false;
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    present = true;
                    break;
                }
            }
            if (!present) result[0].push_back(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            bool seen = false;
            for (int k = 0; k < i; k++) {
                if (nums2[k] == nums2[i]) {
                    seen = true;
                    break;
                }
            }
            if (seen) continue;

            bool present = false;
            for (int j = 0; j < nums1.size(); j++) {
                if (nums2[i] == nums1[j]) {
                    present = true;
                    break;
                }
            }
            if (!present) result[1].push_back(nums2[i]);
        }

        return result;
    }
};
