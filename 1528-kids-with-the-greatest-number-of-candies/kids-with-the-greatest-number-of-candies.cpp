class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        for(int i = 0; i < candies.size(); i++) {
            bool compare = true;
            int newnum = candies[i] + extraCandies;
            for (int j = 0; j < candies.size(); j++) {
                if (!(newnum >= candies[j])) {  
                    compare = false;
                    break; 
                }
            }
            result.push_back(compare);  
        } 
        return result;
    }
};
