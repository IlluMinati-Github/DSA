#include <string>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        while (true) {
            int indx = -1;
            for (int i = 0; i < s.size(); i++) {
                if (isdigit(s[i])) {
                    indx = i;
                    break;
                }
            }
            if (indx == -1) break;
            s.erase(indx, 1);
            int newind = -1;
            for (int i = indx - 1; i >= 0; i--) {
                if (isalpha(s[i])) {
                    newind = i;
                    break;
                }
            }

            if (newind != -1) {
                s.erase(newind, 1);
            }
        }

        return s;
    }
};
