class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for (int i=0;i<nums.size();i++){
            // bool alreadyCounted=false;
            // for (int k=0;k<i;k++){
            //     if (nums[i]==nums[k]) {alreadyCounted=true;break;}
            // }
            // if (alreadyCounted) continue;
            for (int j=i+1;j<nums.size();j++){
                if (nums[i]==nums[j] && i<j){
                    count++;
                }
            }
        }
        return count;
    }
};