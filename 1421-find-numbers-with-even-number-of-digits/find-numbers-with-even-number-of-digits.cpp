class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int tempcount = 0;
            int a = nums[i];
            while(a>0){
                a/=10;
                tempcount++;
            }
            if(tempcount%2==0)  count++;
        }
        return count;
    }
};