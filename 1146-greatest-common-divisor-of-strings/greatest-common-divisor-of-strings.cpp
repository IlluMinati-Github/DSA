class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string result = "";

        // build common prefix
        int n = min(str1.size(), str2.size());
        for (int i = 0; i < n; i++) {
            if (str1[i] == str2[i]) {
                result += str1[i];
            } else {
                break;
            }
        }

        // helper to check divisibility
        auto divides = [&](string s, string t) {
            if (t.empty() || s.size() % t.size() != 0) return false;
            for (int i = 0; i < s.size(); i += t.size()) {
                if (s.substr(i, t.size()) != t) return false;
            }
            return true;
        };

        // shrink result until it divides both
        while (!result.empty()) {
            if (divides(str1, result) && divides(str2, result)) {
                return result;
            }
            result.pop_back();  // shrink prefix
        }

        return "";
    }
};
