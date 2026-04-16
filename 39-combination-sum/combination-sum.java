import java.util.*;

class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> result = new ArrayList<>();
        combisum(0, candidates, target, new ArrayList<>(), result);
        return result;
    }

    public void combisum(int index, int[] arr, int target, List<Integer> temp, List<List<Integer>> result) {

        // base case
        if (target == 0) {
            result.add(new ArrayList<>(temp));
            return;
        }

        // out of bounds
        if (index == arr.length || target < 0) {
            return;
        }

        // ✅ TAKE (same index, reuse allowed)
        temp.add(arr[index]);
        combisum(index, arr, target - arr[index], temp, result);

        // backtrack
        temp.remove(temp.size() - 1);

        // ❌ SKIP (move forward)
        combisum(index + 1, arr, target, temp, result);
    }
}