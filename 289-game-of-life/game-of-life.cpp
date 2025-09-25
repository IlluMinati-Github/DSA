class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> copy = board; 

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                int live = 0;
                if (j - 1 >= 0 && copy[i][j - 1] == 1)
                    live++;
                if (j + 1 < board[i].size() && copy[i][j + 1] == 1)
                    live++;
                if (i + 1 < board.size() && copy[i + 1][j] == 1)
                    live++;
                if (i - 1 >= 0 && copy[i - 1][j] == 1)
                    live++;
                if (i - 1 >= 0 && j - 1 >= 0 && copy[i - 1][j - 1] == 1)
                    live++;
                if (i - 1 >= 0 && j + 1 < board[i].size() &&
                    copy[i - 1][j + 1] == 1)
                    live++;
                if (i + 1 < board.size() && j - 1 >= 0 &&
                    copy[i + 1][j - 1] == 1)
                    live++;
                if (i + 1 < board.size() && j + 1 < board[i].size() &&
                    copy[i + 1][j + 1] == 1)
                    live++;

                if (copy[i][j] == 1 && live < 2)
                    board[i][j] = 0;
                else if (copy[i][j] == 1 && (live == 2 || live == 3))
                    board[i][j] = 1;
                else if (copy[i][j] == 1 && live > 3)
                    board[i][j] = 0;
                else if (copy[i][j] == 0 && live == 3)
                    board[i][j] = 1;
                else
                    board[i][j] = 0; 
            }
        }
    }
};
