import java.util.*;

class Solution {
    public int swimInWater(int[][] grid) {
        int n = grid.length;
        boolean[][] visited = new boolean[n][n];
        
        PriorityQueue<int[]> pq = new PriorityQueue<>((a, b) -> a[0] - b[0]);
        pq.offer(new int[]{grid[0][0], 0, 0});
        
        int[][] directions = {{1,0}, {-1,0}, {0,1}, {0,-1}};
        
        while (!pq.isEmpty()) {
            int[] curr = pq.poll();
            int time = curr[0];
            int i = curr[1];
            int j = curr[2];
            
            if (i == n - 1 && j == n - 1) return time;
            
            if (visited[i][j]) continue;
            visited[i][j] = true;
            
            for (int[] dir : directions) {
                int ni = i + dir[0];
                int nj = j + dir[1];
                
                if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                    int newTime = Math.max(time, grid[ni][nj]);
                    pq.offer(new int[]{newTime, ni, nj});
                }
            }
        }
        
        return -1; // Should never reach here
    }
}
