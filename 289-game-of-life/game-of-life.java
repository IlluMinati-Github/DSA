class Solution {
    public void gameOfLife(int[][] board) {
        int m = board.length;
        int n = board[0].length;

        int[][] copy = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                copy[i][j] = board[i][j];
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int live = 0;

                if (j - 1 >= 0 && copy[i][j - 1] == 1) live++;
                if (j + 1 < n && copy[i][j + 1] == 1) live++;
                if (i - 1 >= 0 && copy[i - 1][j] == 1) live++;
                if (i + 1 < m && copy[i + 1][j] == 1) live++;
                if (i - 1 >= 0 && j - 1 >= 0 && copy[i - 1][j - 1] == 1) live++;
                if (i - 1 >= 0 && j + 1 < n && copy[i - 1][j + 1] == 1) live++;
                if (i + 1 < m && j - 1 >= 0 && copy[i + 1][j - 1] == 1) live++;
                if (i + 1 < m && j + 1 < n && copy[i + 1][j + 1] == 1) live++;

                if (copy[i][j] == 1 && (live < 2 || live > 3)) {
                    board[i][j] = 0;
                } else if (copy[i][j] == 1 && (live == 2 || live == 3)) {
                    board[i][j] = 1;
                } else if (copy[i][j] == 0 && live == 3) {
                    board[i][j] = 1;
                } else {
                    board[i][j] = 0;
                }
            }
        }
    }
}
