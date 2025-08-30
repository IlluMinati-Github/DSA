class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result,x,y;
        for(int i=0;i<n;i++){
            x.push_back(nums[i]);
        }
        for(int i=n;i<nums.size();i++){
            y.push_back(nums[i]);
        }
        int i=0,j=0;
        while(i<n){
            result.push_back(x[i]);
            i++;
            result.push_back(y[j]);
            j++;
        }
        return result;
    }
};