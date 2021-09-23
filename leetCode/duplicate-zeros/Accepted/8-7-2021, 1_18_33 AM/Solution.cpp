// https://leetcode.com/problems/duplicate-zeros

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int size = arr.size();
        for(int i = 0; i < size-1; i++) {
            if(arr[i] == 0) {
                arr.insert(arr.begin()+i+1, 0);
                i++;
                arr.pop_back();
            }
        }
    }
};