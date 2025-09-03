class Solution {
public:
    bool containZero(int n) {
        bool a = true;
        int b = n;
        while (b > 0) {
            if (b % 10 == 0) {
               
                a = false;
                 break;
            }
            b /= 10;
        }
        return a;
    }
    bool SelfDivide(int n) {
        int result = true;
        int a = n;
        vector<int> arr;
        while (a > 0) {
            int d = a % 10;
            arr.push_back(d);
            a /= 10;
        }
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0)
                continue;
            if (n % arr[i] != 0) {
                result = false;
                break;
            }
        }
        return result;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i = left; i < right + 1; i++) {
            if (i % 2 == 0 && i % 5 == 0)
                continue;
            if (!containZero(i))
                continue;

            if (SelfDivide(i)) {
                result.push_back(i);
            }
        }
        return result;
    }
};