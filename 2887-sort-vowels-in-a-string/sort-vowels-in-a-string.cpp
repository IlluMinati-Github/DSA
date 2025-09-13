class Solution {
public:
    string sortVowels(string s) {
        vector<int> indx;
        vector<char> vowel;
        for (int i = 0; i < s.size(); i++) {
            char a = tolower(s[i]);
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
                vowel.push_back(s[i]);
                indx.push_back(i);
            }
        }
        sort(vowel.begin(), vowel.end());
        for (int i = 0; i < indx.size(); i++) {
            s[indx[i]] = vowel[i];
        }
        return s;
    }
};