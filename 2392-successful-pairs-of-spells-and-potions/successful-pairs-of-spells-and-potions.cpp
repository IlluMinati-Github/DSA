class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // vector<int> result;
        // for(int i = 0; i<spells.size();i++){
        //     int count = 0;
        //     for(int j = 0; j<potions.size();j++){
        //         if(spells[i]*potions[j]>=success) count++;
        //     }
        //     result.push_back(count);
        // }
        // return result;

        sort(potions.begin(), potions.end());
        int m = potions.size();
        vector<int> ans(spells.size());
        
        for (int i = 0; i < (int)spells.size(); ++i) {
            long long s = spells[i];
            long long need = (success + s - 1) / s; 
            auto it = lower_bound(potions.begin(), potions.end(), need);
            ans[i] = (int)(potions.end() - it);
        }
        return ans;
    }
};