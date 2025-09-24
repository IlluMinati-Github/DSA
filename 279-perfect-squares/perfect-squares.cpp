class Solution {
public:
    int numSquares(int n) {
        vector<int> final_result(n + 1, INT_MAX);  
        final_result[0] = 0;  
        
        vector<int> squares;
        for (int i = 1; i * i <= n; i++) {
            squares.push_back(i * i);
        }

        for (int i = 1; i <= n; i++) {
            for (int sq : squares) {
                if (sq > i) break;
                final_result[i] = min(final_result[i], final_result[i - sq] + 1);
            }
        }

        return final_result[n];
    }
};
