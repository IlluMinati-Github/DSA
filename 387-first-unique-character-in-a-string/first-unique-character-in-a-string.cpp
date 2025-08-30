class Solution {
public:
    int firstUniqChar(string s) {
        for (int i = 0; i < s.size(); i++) {
            bool repeated = false;
            for (int j = 0; j < s.size(); j++) {
                if (i != j && s[i] == s[j]) { 
                    repeated = true;
                    break;
                }
            }
            if (!repeated) return i; 
        }
        return -1;
    }
};
