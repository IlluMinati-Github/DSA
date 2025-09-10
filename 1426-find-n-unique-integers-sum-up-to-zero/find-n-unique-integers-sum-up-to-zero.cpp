class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        int a = n / 2;
        if (n % 2 == 0) {
            for (int i = -a; i < a + 1; i++) {
                if (i == 0)
                    continue;
                result.push_back(i);
            }
        } else {
            for (int i = -a; i < a + 1; i++) {
                result.push_back(i);
            }
        }
        return result;
    }
};