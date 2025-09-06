class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> res = {""};
        for (int i = 0; i < n; i++) {
            vector<string> next;
            for (int j = 0; j < (int)res.size(); j++) {
                string s = res[j];
                
                next.push_back(s + "1");
                
                if (s.empty() || s.back() == '1') {
                    next.push_back(s + "0");
                }
            }
            res = move(next);
        }
        return res;
    }
};
