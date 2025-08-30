class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // pointer for s
        int j = 0; // pointer for t

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) i++; // match found, move i
            j++; // always move j
        }

        return i == s.size(); // all chars in s were found in t in order
    }
};

