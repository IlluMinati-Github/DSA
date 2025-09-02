class Solution {
public:
    string sortSentence(string s) {
        vector<string> s_arr;

        for (int i = 0; i < s.size(); i++) {
            string word = "";
            while (i < s.size() && s[i] != ' ') {
                word += s[i];
                i++;
            }
            if (!word.empty()) {
                s_arr.push_back(word);
            }
        }

        int n = s_arr.size();
        vector<string> result(n);

        for (int i = 0; i < n; i++) {
            string word = s_arr[i];
            int pos = word.back() - '1'; 
            word.pop_back();            
            result[pos] = word;
        }

        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += result[i];
            if (i != n - 1) ans += " ";
        }

        return ans;
    }
};
