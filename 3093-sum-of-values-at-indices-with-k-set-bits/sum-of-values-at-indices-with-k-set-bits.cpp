class Solution {
public:
    string Binary(int n) {
        string result = "";
        if (n == 0) return "0";
        while (n > 0) {
            char a = (n % 2) + '0';  
            result += a;
            n /= 2;
        }
        reverse(result.begin(), result.end());
        return result;
    }

    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            string b = Binary(i);   
            int count = 0;
            for (char c : b) {
                if (c == '1') count++;
            }
            if (count == k) {
                sum += nums[i];
            }
        }
        return sum;
    }
};
