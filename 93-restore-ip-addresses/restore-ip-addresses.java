import java.util.*;

class Solution {
    public List<String> restoreIpAddresses(String s) {
        List<String> result = new ArrayList<>();
        solve(0, s, 0, "", result);
        return result;
    }

    public void solve(int index, String s, int parts, String path, List<String> result) {
        
        // base case
        if (parts == 4 && index == s.length()) {
            result.add(path.substring(0, path.length() - 1)); // remove last dot
            return;
        }

        // invalid case
        if (parts == 4 || index == s.length()) return;

        // try 1 to 3 digits
        for (int i = 1; i <= 3 && index + i <= s.length(); i++) {
            String part = s.substring(index, index + i);

            if (isValid(part)) {
                solve(index + i, s, parts + 1, path + part + ".", result);
            }
        }
    }

    public boolean isValid(String part) {
        // no leading zero
        if (part.length() > 1 && part.charAt(0) == '0') return false;

        int num = Integer.parseInt(part);
        return num >= 0 && num <= 255;
    }
}