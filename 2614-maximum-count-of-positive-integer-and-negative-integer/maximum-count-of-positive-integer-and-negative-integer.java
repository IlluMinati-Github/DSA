class Solution {
    public int maximumCount(int[] nums) {
        int negative = 0, positive = 0;
        for (int j = 0; j < nums.length; j++) {
            if (nums[j] < 0)
                negative++;
            else if (nums[j] > 0)
                positive++;
        }
        return Math.max(positive, negative);
    }
}