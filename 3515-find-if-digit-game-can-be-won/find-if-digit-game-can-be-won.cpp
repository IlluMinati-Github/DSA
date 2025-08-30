class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single=0;
        int double_digit=0;

        for(int i=0;i<nums.size();i++){
            if (nums[i]<=9){
                single+=nums[i];
            }
            else if (nums[i]>9 && nums[i]<100){
                double_digit+=nums[i];
            }
        }
        if (single>double_digit || double_digit>single){
            return true;
        }
        else return false;
    }
};