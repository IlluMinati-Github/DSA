class Solution {
    public int[][] insert(int[][] intervals, int[] newInterval) {

        // Create a temporary array to store result
        int[][] temp = new int[intervals.length + 1][2];

        int i = 0, j = 0;

        // Add all intervals before newInterval
        while (i < intervals.length && intervals[i][1] < newInterval[0]) {
            temp[j++] = intervals[i++];
        }

        // Merge overlapping intervals
        while (i < intervals.length && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = Math.min(newInterval[0], intervals[i][0]);
            newInterval[1] = Math.max(newInterval[1], intervals[i][1]);
            i++;
        }

        // Add merged interval
        temp[j++] = newInterval;

        // Add remaining intervals
        while (i < intervals.length) {
            temp[j++] = intervals[i++];
        }

        // Final answer array
        int[][] ans = new int[j][2];

        for (int k = 0; k < j; k++) {
            ans[k] = temp[k];
        }

        return ans;
    }
}