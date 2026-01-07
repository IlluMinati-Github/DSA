class Solution {
    public boolean isPalindrome(String s) {
        StringBuilder sb = new StringBuilder();
        String a = s.toLowerCase();

        for (char b : a.toCharArray()) {
            if (Character.isLetterOrDigit(b)) {
                sb.append(b);
            }
        }

        String original = sb.toString();
        String reversed = sb.reverse().toString();

        return original.equals(reversed);
    }
}
