class Solution {
public:
    int countDigits(int num) {
        int result;
        if(1<=num && 10>num) result=1;
        else{
            int count=0;
            int a=num;
            while(num>0){
                int d=num%10;
                if(a%d==0) count++;
                num/=10;
            }
            result=count;
        }
        return result;
    }
};