class Solution {
public:
    int reverseDegree(string s) {
        int totalSum=0;
        for(int i=0;i<s.size();i++){
            char element=s[i];
            int reversedValue = 26 - (s[i] - 'a');
            int product = reversedValue * (i+1);
            totalSum+=product;
        }
        return totalSum;
    }
};