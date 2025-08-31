class Solution {
public:
    int smallestEvenMultiple(int n) {
        int result=-1;
        int x=150;
        for (int i=1;i<=x*2;i++){
            if(i%2==0 && i%n==0){
                result=i;
                break;
            }
        }
        return result;
    }
};