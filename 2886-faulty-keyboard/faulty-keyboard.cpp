class Solution {
public:
    string finalString(string s) {
        string word="";
        for(int i=0;i<s.size();i++){
            if (s[i]!='i'){
                word+=s[i];
            }
            else {
                reverse(word.begin(),word.end());
            }
        }
        return word;
    }
};