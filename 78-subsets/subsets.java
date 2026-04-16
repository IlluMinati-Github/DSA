import java.util.*;

class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        subseq(nums, 0, new ArrayList<>(), result);
        return result;
    }

    public void subseq(int[] nums, int index, List<Integer> temp, List<List<Integer>> result) {
        
        if (index == nums.length) {
            result.add(new ArrayList<>(temp)); // copy
            return;
        }

        // include
        temp.add(nums[index]);
        subseq(nums, index + 1, temp, result);

        // backtrack (remove last)
        temp.remove(temp.size() - 1);

        // exclude
        subseq(nums, index + 1, temp, result);
    }
}