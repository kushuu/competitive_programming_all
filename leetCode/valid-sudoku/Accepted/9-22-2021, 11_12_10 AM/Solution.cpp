// https://leetcode.com/problems/valid-sudoku

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // checking for elements' row-wise uniqueness.
        for(auto i : board) {
            unordered_set<char> check;
            for(auto j : i) {
                if(check.find(j) == check.end()) {
                    if(j != '.') check.insert(j);
                }
                else return false;
            }
        }
        
        // transposing the matrix
        for(int i = 0; i < 9; i++) {
            for(int j = i; j < 9; j++) {
                swap(board[i][j], board[j][i]);
            }
        }
        
        // checking for elements' column-wise uniqueness.
        for(auto i : board) {
            unordered_set<int> check;
            for(auto j : i) {
                if(check.find(j) == check.end()) {
                    if(j != '.') check.insert(j);
                }
                else return false;
            }
        }
        
        // checking 3x3 boxes.
        for(int i = 0; i < 9; i+=3) {
            for(int j = 0; j < 9; j+=3) {
                unordered_set<char> check;
                for(int bi = i; bi < i+3; bi++) {
                    for(int bj = j; bj < j+3; bj++) {
                        if(check.find(board[bi][bj]) == check.end()) {
                            if(board[bi][bj] != '.') check.insert(board[bi][bj]);
                        }
                        else return false;
                    }
                }
            }
        }
        return true;
    }
};