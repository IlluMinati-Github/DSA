#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getMaxIndex(vector<int>& nums) {
        int idx = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] > nums[idx]) idx = i;
        }
        return idx;
    }
    
    int getMinIndex(vector<int>& nums) {
        int idx = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] < nums[idx]) idx = i;
        }
        return idx;
    }
    
    double minimumAverage(vector<int>& nums) {
        vector<double> arr;
        
        while(nums.size() >= 2) {
            int maxIdx = getMaxIndex(nums);
            int minIdx = getMinIndex(nums);
            
            double result = (nums[maxIdx] + nums[minIdx]) / 2.0;
            arr.push_back(result);
            
            if(maxIdx > minIdx) {
                nums.erase(nums.begin() + maxIdx);
                nums.erase(nums.begin() + minIdx);
            } else {
                nums.erase(nums.begin() + minIdx);
                nums.erase(nums.begin() + maxIdx);
            }
        }
        
        if(!nums.empty()) arr.push_back(nums[0]);
        
        return *min_element(arr.begin(), arr.end());
    }
};
