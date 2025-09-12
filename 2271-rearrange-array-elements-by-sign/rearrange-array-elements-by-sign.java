class Solution {
    public int[] rearrangeArray(int[] nums) {
        List<Integer> pos = new ArrayList<>();
        List<Integer> neg = new ArrayList<>();
        
        for (int num : nums) {
            if (num < 0) neg.add(num);
            else pos.add(num);
        }
        
        int[] result = new int[nums.length];
        int idx = 0;
        
        for (int i = 0; i < pos.size(); i++) {
            result[idx++] = pos.get(i);
            result[idx++] = neg.get(i);
        }
        
        return result;
    }
}
