class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> result;
        int start = 0;
        result.push_back(start);
        for (int i = 0; i < gain.size(); i++) {
            start += gain[i];
            result.push_back(start);
        }
        int maxVal = *max_element(result.begin(), result.end());
        return maxVal;
    }
};