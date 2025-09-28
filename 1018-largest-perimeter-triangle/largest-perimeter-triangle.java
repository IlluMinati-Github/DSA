class Solution {
    public int largestPerimeter(int[] nums) {
        int perm = 0;
        Arrays.sort(nums);
        
        for (int i = nums.length - 1; i >= 2; --i) {
            if (nums[i - 2] + nums[i - 1] > nums[i]) {
                int sum = nums[i - 2] + nums[i - 1] + nums[i];
                perm = Math.max(perm, sum);
            }
        }
        
        return perm;
    }
}