class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();
        long long answer = 0;
        
        while (i < n && s[i] == ' ') i++;
        
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') sign = -1;
            i++;
        }
        
        while (i < n && isdigit(s[i])) {
            answer = answer * 10 + (s[i] - '0');
            
            if (answer * sign > INT_MAX) return INT_MAX;
            if (answer * sign < INT_MIN) return INT_MIN;
            
            i++;
        }
        
        return (int)(answer * sign);
    }
};
