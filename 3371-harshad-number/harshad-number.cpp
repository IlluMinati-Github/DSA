class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int a=-1;
        int sum=0;
        int c=x;
        while(c>0){
            sum+=c%10;
            c/=10;
        }
        if(x%sum==0) a=sum;
        return a;
    }
};