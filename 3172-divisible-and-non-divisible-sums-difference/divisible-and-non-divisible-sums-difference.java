class Solution {
    public int differenceOfSums(int n, int m) {
        int div=0;
        int nodiv=0;
        for(int i=1;i<n+1;i++){
            if(i%m==0){
                div+=i;
            }
            else {
                nodiv+=i;
            }
        }
        return nodiv-div;
        
    }
}