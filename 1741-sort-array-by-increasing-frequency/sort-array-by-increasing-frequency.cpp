class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> result, indexx, frequency;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            bool already = false;
            for (int k = 0; k < i; k++) {
                if (nums[i] == nums[k]) {
                    already = true;
                    break;
                }
            }
            if (already)
                continue;
            int count = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            indexx.push_back(nums[i]);
            frequency.push_back(count);
        }
        for (int i = 0; i < indexx.size(); i++) {
            for (int j = i + 1; j < indexx.size(); j++) {
                if (frequency[i] > frequency[j]) {
                    swap(frequency[i], frequency[j]);
                    swap(indexx[i], indexx[j]);
                } else if (frequency[i] == frequency[j] &&
                           indexx[i] < indexx[j]) {
                    swap(indexx[i], indexx[j]);
                }
            }
        }
         for (int i = 0; i < indexx.size(); i++) {
            for (int k = 0; k < frequency[i]; k++) {
                result.push_back(indexx[i]);
            }
        }

        return result;
    }
};