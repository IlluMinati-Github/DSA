class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1);
        unordered_map<int,int> last; 
        set<int> dryDays; 
        
        for (int i = 0; i < n; i++) {
            int lake = rains[i];
            if (lake == 0) {
                dryDays.insert(i); 
            } else {
                ans[i] = -1;
                if (last.count(lake)) {
                    auto it = dryDays.upper_bound(last[lake]);
                    if (it == dryDays.end()) return {}; 
                    ans[*it] = lake; 
                    dryDays.erase(it);
                }
                last[lake] = i;
            }
        }
        return ans;
    }
};
