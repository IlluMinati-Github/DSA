class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0;
        vector<string> a;

        for (int i = 0; i < text.size(); i++) {
            string word = "";
            while (i < text.size() && text[i] != ' ') {
                word += text[i];
                i++;
            }
            if (!word.empty()) {
                a.push_back(word);
            }
        }

        for (int i = 0; i < a.size(); i++) {
            bool found = false;
            for (int j = 0; j < brokenLetters.size(); j++) {
                if (a[i].find(brokenLetters[j]) != string::npos) {
                    found = true;
                    break;
                }
            }
            if (!found)
                count++;
        }

        return count;
    }
};
