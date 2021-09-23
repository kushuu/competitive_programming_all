// https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game

class Solution {
public:
    bool found(vector<vector<char>> check, char ch) {
        if(check[0][0] == check[0][1] and check[0][1] == check[0][2] and check[0][0] == ch) return true;
        if(check[1][0] == check[1][1] and check[1][1] == check[1][2] and check[1][0] == ch) return true;
        if(check[2][0] == check[2][1] and check[2][1] == check[2][2] and check[2][0] == ch) return true;
        if(check[0][0] == check[1][0] and check[1][0] == check[2][0] and check[0][0] == ch) return true;                 if(check[0][1] == check[1][1] and check[1][1] == check[2][1] and check[0][1] == ch) return true;
        if(check[0][2] == check[1][2] and check[1][2] == check[2][2] and check[0][2] == ch) return true;
        if(check[0][0] == check[1][1] and check[1][1] == check[2][2] and check[0][0] == ch) return true;
        if(check[0][2] == check[1][1] and check[1][1] == check[2][0] and check[0][2] == ch) return true;

        return false;
    }
    
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>> check={{'.','.','.'}, {'.','.','.'}, {'.','.','.'}};
        int size = moves.size();
        
        if(size < 9) {
            for(int i = 0; i < size; i++) {
                if(!(i&1)) {
                    check[moves[i][0]][moves[i][1]] = 'X';
                    if(found(check, 'X')) return "A";
                }
                else {
                    check[moves[i][0]][moves[i][1]] = 'O';
                    if(found(check, 'O')) return "B";
                }
                // for(auto i : check) {
                //     for(auto j : i) cout << j << " " ; cout << endl;
                // }
                // cout << endl;
            }
            return "Pending";
        }
        
        for(int i = 0; i < size; i++) {
                if(!(i&1)) {
                    check[moves[i][0]][moves[i][1]] = 'X';
                    if(found(check, 'X')) return "A";
                }
                else {
                    check[moves[i][0]][moves[i][1]] = 'O';
                    if(found(check, 'O')) return "B";
                }
                // for(auto i : check) {
                //     for(auto j : i) cout << j << " " ; cout << endl;
                // }
                // cout << endl;
            }
        return "Draw";
    }
};