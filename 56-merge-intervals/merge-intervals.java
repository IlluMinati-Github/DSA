import java.util.*;

class Solution {

    public int[][] merge(int[][] intervals) {

        Arrays.sort(intervals, (a,b) -> a[0] - b[0]);

        ArrayList<int[]> ans = new ArrayList<>();

        ans.add(intervals[0]);

        for(int i=1;i<intervals.length;i++){

            int[] last = ans.get(ans.size()-1);

            // overlap
            if(intervals[i][0] <= last[1]){

                last[1] = Math.max(last[1], intervals[i][1]);
            }

            // no overlap
            else{
                ans.add(intervals[i]);
            }
        }

        int[][] result = new int[ans.size()][2];

        for(int i=0;i<ans.size();i++){
            result[i] = ans.get(i);
        }

        return result;
    }
}