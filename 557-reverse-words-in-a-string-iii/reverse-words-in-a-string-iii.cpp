class Solution {
public:
    string reverseWords(string s) {
        vector<string> wordle;
        for (int i = 0; i < s.size(); i++) {
            string word = "";
            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            if (!word.empty()) {
                wordle.push_back(word);
            }
        }
        string result = "";
        for (int i = 0; i < wordle.size(); i++) {
            if (i > 0)
                result += ' '; 
            for (int j = wordle[i].size() - 1; j >= 0; j--) {
                result += wordle[i][j]; 
            }
        }

        return result;
    }
};