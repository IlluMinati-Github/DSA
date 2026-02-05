class Solution {

    public int[][] dp;

    private int Solve(int i, int j, String s, String t) {
        if (i == 0 || j == 0) return 0;

        if (dp[i][j] != -1) return dp[i][j];

        if (s.charAt(i - 1) == t.charAt(j - 1)) {
            return dp[i][j] = 1 + Solve(i - 1, j - 1, s, t);
        }

        return dp[i][j] = Math.max(
            Solve(i - 1, j, s, t),
            Solve(i, j - 1, s, t)
        );
    }

    public int longestCommonSubsequence(String text1, String text2) {
        dp = new int[text1.length() + 1][text2.length() + 1];

        for (int i = 0; i <= text1.length(); i++) {
            for (int j = 0; j <= text2.length(); j++) {
                dp[i][j] = -1;
            }
        }

        return Solve(text1.length(), text2.length(), text1, text2);
    }
}
