class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                int x=nums[i];
                int y=nums[j];
                if (abs(x-y)==k) count++;
            }
        }
        return count/2;
    }
};