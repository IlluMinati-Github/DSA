import java.util.*;

class Solution {
    public List<String> letterCombinations(String digits) {
        List<String> result = new ArrayList<>();

        if (digits.length() == 0) return result;

        String[] map = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        solve(0, digits, map, "", result);
        return result;
    }

    public void solve(int index, String digits, String[] map, String ans, List<String> result) {
        
        // base case
        if (index == digits.length()) {
            result.add(ans);
            return;
        }

        // current digit
        int digit = digits.charAt(index) - '0';
        String letters = map[digit];

        // try all letters
        for (int i = 0; i < letters.length(); i++) {
            solve(index + 1, digits, map, ans + letters.charAt(i), result);
        }
    }
}