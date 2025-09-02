class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> a;
        int b = k % nums.size();
        for(int i=nums.size()-b;i<nums.size();i++){
            a.push_back(nums[i]);
        }
        for(int i=0;i<nums.size()-b;i++){
            a.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=a[i];
        }
        
    }
};