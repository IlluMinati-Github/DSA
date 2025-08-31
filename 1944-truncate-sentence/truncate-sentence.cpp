class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> a;
        for(int i=0;i<s.size();i++ ){
            string b="";
            while(i < s.size() && s[i] != ' ') {b+=s[i];i++;}
            a.push_back(b);
        }
        string result="";
        for(int i=0;i<k;i++){
            if(i==0) result+=a[i];
            else result+=" "+a[i];
        }

        return result;
    }
};