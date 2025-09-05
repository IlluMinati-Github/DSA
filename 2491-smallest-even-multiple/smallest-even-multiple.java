class Solution {
    public int smallestEvenMultiple(int n) {
        int x=0;
        if(n%2==0) x=n;
        else x=n*2;
        return x;
    }
}