class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        int n = grid[0].size();   

        for (int k = 0; k < n; k++) {   
            int roundMax = 0;

            for (int i = 0; i < grid.size(); i++) {
                int maxi = *max_element(grid[i].begin(), grid[i].end());
                int index = -1;

                for (int j = 0; j < grid[i].size(); j++) {
                    if (grid[i][j] == maxi) {
                        index = j;
                        break;
                    }
                }

                grid[i].erase(grid[i].begin() + index);

                if (maxi > roundMax) {
                    roundMax = maxi;
                }
            }

            ans += roundMax;
        }

        return ans;
    }
};
