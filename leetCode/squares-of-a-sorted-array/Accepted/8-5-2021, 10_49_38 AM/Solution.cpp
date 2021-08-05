// https://leetcode.com/problems/squares-of-a-sorted-array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> negs, pos, ans;
        for(auto i : nums) {
            if(i <= 0) negs.push_back(i);
            else pos.push_back(i);
        }
        
        reverse(negs.begin(), negs.end());
        
        // for(auto i : negs) cout << i << " " ; cout << endl;
        // for(auto i : pos) cout << i << " " ; cout << endl;
        
        
        int negPtr, posPtr;
        for(negPtr = 0, posPtr = 0; negPtr < negs.size() and posPtr < pos.size(); ) {
            if(-1*negs[negPtr] < pos[posPtr]) {
                ans.push_back(negs[negPtr]*negs[negPtr]);
                negPtr++;
            }
            else {
                ans.push_back(pos[posPtr]*pos[posPtr]);
                posPtr++;
            }
        }
        if(negPtr == negs.size()) {
            for(int j = posPtr; j < pos.size(); j++) ans.push_back(pos[j]*pos[j]);
        }
        else {
            for(int j = negPtr; j < negs.size(); j++) ans.push_back(negs[j]*negs[j]);
        }
        return ans;
    }
};