class Solution {
public:
    bool checkIfPangram(string sentence) {
        string s = "thequickbrownfoxjumpsoverthelazydog";
        for (int i = 0; i < s.size(); i++) {
            bool alreadychecked = false;
            for (int k = 0; k < i; k++) {
                if (s[i] == s[k]) {
                    alreadychecked = true;
                    break;
                }
            }
            if (alreadychecked) continue;
            bool found = false;
            for (int j = 0; j < sentence.size(); j++) {
                if (s[i] == sentence[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return false; 
            }
        }
        return true; 
    }
};
