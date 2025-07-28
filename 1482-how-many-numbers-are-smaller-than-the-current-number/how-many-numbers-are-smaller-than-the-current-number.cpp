class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int l=nums.size();
        vector<int> arr(l);
        for (int i=0;i<l;i++){
            int count=0;
            for (int j=0;j<l;j++){
                if (i!=j){
                    if (nums[i]>nums[j]){
                        count++;
                    }
                }
            }
            arr[i]=count;
        }
        return arr;
    }
};