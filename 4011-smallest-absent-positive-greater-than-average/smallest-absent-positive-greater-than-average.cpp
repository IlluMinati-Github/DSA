class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        double realAvg = (double)sum / nums.size();
        int avg = floor(realAvg) + 1;   
        if (avg <= 0) avg = 1;          

        while (true) {
            bool found = false;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == avg) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return avg; 
            }
            avg++;
        }
    }
};
