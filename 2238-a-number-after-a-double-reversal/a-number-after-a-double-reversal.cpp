class Solution {
public:
    int revers(int num){
        int res=0;
        while(num>0){
            res=res*10+num%10;
            num/=10;    
        }
        return res;
    }
    bool isSameAfterReversals(int num) {
        int a=num;
        if(revers(revers(a))==num){
            return true;
        }
        else return false;
    }
};