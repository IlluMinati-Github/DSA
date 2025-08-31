class Solution {
public:
    // int reverse(int n){
    //     int rev=0;
    //     while(n>0){
    //         rev=rev*10+n%10;
    //         n/=10;
    //     }
    //     return rev;
    // }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=1 && nums[i]<=9) result.push_back(nums[i]);
            else{
                vector<int> ab;
                // int a=reverse(nums[i]);
                while(nums[i]>0){
                    int a=nums[i]%10;
                    ab.push_back(a);
                    nums[i]/=10;
                }
                for(int i=ab.size()-1;i>=0;i--){
                    result.push_back(ab[i]);
                }
            }
        }
        return result;
    }
};