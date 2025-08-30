class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> copy;
        for (int i=0;i<heights.size();i++){
            copy.push_back(heights[i]);
        }
        sort(heights.begin(),heights.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if (copy[i]!=heights[i]) count++;
        }
        return count;
    }
};