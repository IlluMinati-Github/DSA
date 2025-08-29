class Solution {
public:
    int getNext(int n) {
        int total = 0;
        while (n > 0) {
            int d = n % 10;
            total += pow(d,2);
            n /= 10;
        }
        return total;
    }

    bool isHappy(int n) {
        for (int i = 0; i < 500; i++) {  
            if (n == 1) return true;
            n = getNext(n);
        }
        return false;
    }
};
