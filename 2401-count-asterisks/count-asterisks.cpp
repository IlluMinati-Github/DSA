class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '|') {
                i++;
                while (i < s.size() && s[i] != '|') {
                    i++;
                }
            } else if (s[i] == '*') {
                count++;
            }
        }
        return count;
    }
};
