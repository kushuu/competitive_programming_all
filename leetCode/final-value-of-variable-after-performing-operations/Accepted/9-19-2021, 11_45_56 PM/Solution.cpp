// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& ops) {
        int x = 0;
        for(auto i : ops) {
            if(i == "X++") x++;
            else if(i == "X--") x--;
            else if(i == "--X") --x;
            else++x;
        }
        return x;
    }
};