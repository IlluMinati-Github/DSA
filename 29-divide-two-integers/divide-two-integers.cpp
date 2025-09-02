class Solution {
public:
    int divide(int dividend, int divisor) {

        // if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        // else return dividend/divisor;
        // Handle overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Use long long to avoid overflow
        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);
        long long result = 0;

        // Division by bit shifting
        while (a >= b) {
            long long temp = b, multiple = 1;
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            result += multiple;
        }

        // Apply sign
        if ((dividend < 0) ^ (divisor < 0)) {
            result = -result;
        }

        // Clamp to int
        if (result > INT_MAX) return INT_MAX;
        if (result < INT_MIN) return INT_MIN;

        return (int)result;
    }
};
