class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // O(n log n)
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;  // found duplicate
            }
        }
        return false;
    }
};


// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         bool duplicate=false;
//         for (int i=0;i<nums.size();i++ ){
//             int count=0;
//             bool already_counted=false;
//             for(int k=0;k<i;k++){
//                 if (nums[i]==nums[k]){
//                     already_counted=false;
//                     break;
//                 }
//             }
//             if (already_counted) continue;
//             for (int j=0;j<nums.size();j++){
//                 if (nums[i]==nums[j]) count++;
//             }
//             if (count>=2){
//                 duplicate=true;
//                 break;
//             }

//         }
//         return duplicate;
//     }
// };