class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int weekStart = 1;  
        int day = 0;

        while (day < n) {
            for (int d = 0; d < 7 && day < n; d++) {
                sum += weekStart + d;
                day++;
            }
            weekStart++; 
        }

        return sum;
    }
};
