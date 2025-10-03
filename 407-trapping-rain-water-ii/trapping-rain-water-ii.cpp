class Solution {
public:
    int trapRainWater(vector<vector<int>>& h) {
        int m = h.size(), n = h[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        using T = tuple<int,int,int>; // (height, x, y)
        priority_queue<T, vector<T>, greater<T>> pq;

        // Push boundary cells
        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j)
                if (i == 0 || j == 0 || i == m-1 || j == n-1)
                    pq.emplace(h[i][j], i, j), vis[i][j] = 1;

        int res = 0, dirs[5] = {1,0,-1,0,1};
        while (!pq.empty()) {
            auto [ht, x, y] = pq.top(); pq.pop();
            for (int k = 0; k < 4; ++k) {
                int nx = x + dirs[k], ny = y + dirs[k+1];
                if (nx < 0 || ny < 0 || nx >= m || ny >= n || vis[nx][ny]) continue;
                vis[nx][ny] = 1;
                res += max(0, ht - h[nx][ny]);
                pq.emplace(max(ht, h[nx][ny]), nx, ny);
            }
        }
        return res;
    }
};
