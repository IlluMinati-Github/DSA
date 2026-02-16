class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int s:nums){
            result ^=s;
        }
        return result;
    }
};