class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;  
            int start = max(0, i - nums[i]);  

            for(int j = start; j <= i; j++){  
                sum += nums[j];  
            }

            totalSum += sum;
        }
        return totalSum;
    }
};
