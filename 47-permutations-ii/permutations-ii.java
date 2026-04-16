import java.util.*;

class Solution {
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        
        Arrays.sort(nums); 
        
        boolean[] used = new boolean[nums.length];
        
        num(nums, used, new ArrayList<>(), result);
        return result;
    }

    public void num(int[] nums, boolean[] used, List<Integer> temp, List<List<Integer>> result) {

        // base case
        if (temp.size() == nums.length) {
            result.add(new ArrayList<>(temp));
            return;
        }

        for (int i = 0; i < nums.length; i++) {

            // already used → skip
            if (used[i]) continue;

            //  duplicate condition (MOST IMPORTANT)
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

            // choose
            used[i] = true;
            temp.add(nums[i]);

            // recurse
            num(nums, used, temp, result);

            // backtrack
            temp.remove(temp.size() - 1);
            used[i] = false;
        }
    }
}