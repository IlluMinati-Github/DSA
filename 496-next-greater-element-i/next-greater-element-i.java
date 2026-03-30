class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int n = nums1.length;
        int[] result = new int[n];

        for(int i=0;i<n;i++){
           for(int j =0;j<nums2.length;j++){
            if(nums1[i] == nums2[j]) {
                    int k;
                    for(k = j + 1; k < nums2.length; k++){
                        if(nums2[k] > nums2[j]) {
                            result[i] = nums2[k];
                            break;
                        }
                    }
                    if(k == nums2.length) result[i] = -1;
                    break;
                }

           }
        }
        return result;
    }
}