class Solution {
public:
    int sumBase(int n, int k) {
       string word="";
       int a=n;
       while(a>0){
        char d=(a%k) + '0';
        word+=d;
        a=a/k;
       } 
       int sum=0;
       for(int i=0;i<word.size();i++){
        int b=word[i]-'0';
        sum+=b;
       }
       return sum;
    }
};