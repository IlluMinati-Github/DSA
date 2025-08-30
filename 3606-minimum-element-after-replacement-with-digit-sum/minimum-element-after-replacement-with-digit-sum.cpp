class Solution {
public:
    int sum(int n) {
        int sum = 0;
        while(n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int minElement(vector<int>& nums) {
        int minVal = INT_MAX;  
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = sum(nums[i]);      
            minVal = min(minVal, nums[i]);  
        }
        return minVal;
    }
};
