class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int carry = 0;
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int n1 = i >= 0 ? num1[i--] - '0' : 0; // get digit from num1
            int n2 = j >= 0 ? num2[j--] - '0' : 0; // get digit from num2
            int sum = n1 + n2 + carry;
            carry = sum / 10;
            result.push_back(sum % 10 + '0'); // add digit to result
        }

        reverse(result.begin(), result.end()); // reverse to get correct order
        return result;
    }
};
