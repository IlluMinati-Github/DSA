class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        if (nums.empty())
            return result;

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                if (count > n / 3) {
                    result.push_back(nums[i - 1]);
                }
                count = 1;
            }
        }

        if (count > n / 3) {
            result.push_back(nums[n - 1]);
        }

        return result;
    }
};

// TimeLimit Exceed
// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//        vector<int> result;
//        for(int i=0;i<nums.size();i++){
//         int count=0;
//         bool counted=false;
//         for(int k=0;k<i;k++){
//             if(nums[i]==nums[k]){
//                 counted=true;
//             }
//         }
//         if(counted) continue;
//         for(int j=0;j<nums.size();j++){
//             if(nums[i]==nums[j]) count++;
//         }
//         if(count>(nums.size()/3)){
//             result.push_back(nums[i]);
//         }
//        }
//        return result;
//     }
// };