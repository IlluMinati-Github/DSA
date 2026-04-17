class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> result = new ArrayList<>();
        Calculate(0,candidates,target,new ArrayList<>(),result);
        return result;
    }
    public void Calculate(int index , int[] arr, int target, List<Integer> temp,List<List<Integer>> result){
        if(index==arr.length || target<0 ) return;
        if(target==0) {
            result.add(new ArrayList<>(temp));
            return;
        }
        temp.add(arr[index]);
        Calculate(index,arr,target-arr[index],temp,result);
        temp.remove(temp.size()-1);
        Calculate(index+1,arr,target,temp,result);
    }
}