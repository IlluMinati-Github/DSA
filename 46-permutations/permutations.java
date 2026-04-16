import java.util.*;

class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        boolean[] used = new boolean[nums.length];
        solve(nums, used, new ArrayList<>(), result);
        return result;
    }

    public void solve(int[] nums, boolean[] used, List<Integer> temp, List<List<Integer>> result) {

        // base case
        if (temp.size() == nums.length) {
            result.add(new ArrayList<>(temp));
            return;
        }

        // try all elements
        for (int i = 0; i < nums.length; i++) {

            if (used[i]) continue; // skip already used

            // choose
            used[i] = true;
            temp.add(nums[i]);

            // recurse
            solve(nums, used, temp, result);

            // backtrack
            temp.remove(temp.size() - 1);
            used[i] = false;
        }
    }
}