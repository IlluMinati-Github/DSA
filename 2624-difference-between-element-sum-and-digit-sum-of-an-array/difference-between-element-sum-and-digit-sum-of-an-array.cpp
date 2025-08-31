class Solution {
public:
    int SumofDigits(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int element=0;
        int digit=0;
        for(int i=0;i<nums.size();i++){
            element+=nums[i];
            digit+=SumofDigits(nums[i]);
        }
        return abs(element-digit);
    }
};