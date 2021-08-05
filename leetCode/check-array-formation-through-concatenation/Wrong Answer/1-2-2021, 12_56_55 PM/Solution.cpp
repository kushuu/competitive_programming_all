// https://leetcode.com/problems/check-array-formation-through-concatenation

class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        for(auto i : pieces) {
            int size = i.size();
            if(size < 2) continue;
            for(int j = 1; j < size; j++) {
                if(find(arr.begin(), arr.end(), i[j]) != find(arr.begin(), arr.end(), i[j-1])+1 ) {
                    return false;
                }
            }
        }
        return true;
    }
};