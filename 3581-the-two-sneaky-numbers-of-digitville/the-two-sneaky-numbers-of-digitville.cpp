class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        for (int i=0;i<nums.size();i++){
            bool counted=false;
            for (int k=0;k<i;k++){
                if (nums[i]==nums[k]){
                    counted=true;
                    break;
                }
            }
            if (counted) continue;
            int count=0;
            for (int j=0;j<nums.size();j++){
                if (nums[i]==nums[j]) count++;
            }
            if (count==2){
                result.push_back(nums[i]);
            }
        }
        return result;
    }
};