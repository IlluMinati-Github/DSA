class Solution {
public:
    bool isPowerOfThree(int n) {
        for (int i=0;i<=19;i++){
            if(n<1){
                return false;
            }
            int ans=pow(3,i);
            if (ans==n){
                 return true;
            }
        }
        return false;
        
    }
};