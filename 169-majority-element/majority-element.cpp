class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for (int i=0;i<nums.size();i++){
            int count=0;
            bool alreadyCounted=false;
            for (int k=0;k<i;k++){
                if (nums[k]==nums[i]){
                    alreadyCounted=true;
                    break;
                }
            }
            if (alreadyCounted) continue;
            for (int j=0;j<nums.size();j++){
                if (nums[i]==nums[j]) count++;
            }

            if (count > (nums.size()/2)){
                return nums[i];
            }
        }
        return -1;
    }
};