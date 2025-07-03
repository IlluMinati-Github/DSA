class Solution {
public:
    bool isPowerOfFour(int n) {
        for (int i=0;i<=15;i++){
            if (n<1){
                return false;
            }
            if (pow(4,i)==n){
                 return true;
            }
        }
        return false;
        
    }
};