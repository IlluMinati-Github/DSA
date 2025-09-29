#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int solve(vector<int>& values, int i, int j, vector<vector<int>>& last) {
        if (j - i < 2) return 0;

        if (last[i][j] != -1) return last[i][j];

        int minScore = INT_MAX;

        for (int k = i + 1; k < j; k++) {
            int cost = values[i] * values[j] * values[k] 
                        + solve(values, i, k, last)
                        + solve(values, k, j, last);

            if (cost < minScore) {
                minScore = cost;
            }
        }

        return last[i][j] = minScore;
    }

    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        vector<vector<int>> last(n, vector<int>(n, -1)); 

        int minScore = solve(values, 0, n - 1, last);
        return minScore;
    }
};
