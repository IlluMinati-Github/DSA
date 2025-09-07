class Solution {
public:
    bool checkPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                return false; 
            }
            i++;
            j--;
        }
        return true; 
    }
    string firstPalindrome(vector<string>& words) {
        string result="";
        for(int i=0;i<words.size();i++){
            string a = words[i];
            if (checkPalindrome(a)){
                result=a;
                break;
            }
        }
        return result;
    }
};