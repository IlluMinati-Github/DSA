class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        int a = n / 2;
        for (int i = -a; i < a + 1; i++) {
            if (i == 0 && n % 2 == 0)
                continue;
            else
                result.push_back(i);
        }
        return result;
    }
};