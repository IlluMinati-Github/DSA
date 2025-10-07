class Solution {
    public static String greatestLetter(String s) {
        Set<Character> lower = new HashSet<>();
        Set<Character> upper = new HashSet<>();
        
        for (char c : s.toCharArray()) {
            if (Character.isLowerCase(c)) lower.add(c);
            else upper.add(c);
        }
        
        char result = 0;
        for (char c = 'A'; c <= 'Z'; c++) {
            if (upper.contains(c) && lower.contains(Character.toLowerCase(c))) {
                result = c;
            }
        }
        
        return result == 0 ? "" : String.valueOf(result);
    }
}