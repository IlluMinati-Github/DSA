class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;

        for (int i = 0; i < words.size(); i++) {
            bool has = true;

            if (words[i].size() < pref.size()) {
                has = false; 
            } else {
                for (int j = 0; j < pref.size(); j++) {
                    if (words[i][j] != pref[j]) {
                        has = false;
                        break;
                    }
                }
            }

            if (has) count++;
        }

        return count;
    }
};
