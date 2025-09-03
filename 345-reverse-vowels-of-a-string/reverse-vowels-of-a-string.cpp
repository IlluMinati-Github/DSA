class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowel;
        vector<int> idss;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                s[i] == 'O' || s[i] == 'U') {
                vowel.push_back(s[i]);
                idss.push_back(i);
            }
        }

        reverse(vowel.begin(), vowel.end());

        for (int i = 0; i < vowel.size(); i++) {
            s[idss[i]] = vowel[i];
        }
        return s;
    }
};