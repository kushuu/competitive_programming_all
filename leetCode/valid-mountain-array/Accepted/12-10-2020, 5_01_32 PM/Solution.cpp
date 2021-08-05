// https://leetcode.com/problems/valid-mountain-array

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int maxVal = arr[0], pos = 0;
        int size = arr.size();
        for(int i = 1; i < size; i++) {
            if(arr[i] == arr[i-1]) return false;
            if(arr[i] > maxVal) {
                maxVal = arr[i];
                pos = i;
            }
        }
        // cout << pos ;
        if(pos == 0||pos == size-1) return false;
        for(int i = 1; i < pos; i++) {
            if(arr[i] < arr[i-1]) {
                // cout << "\n" << i;
                return false;
            }
        }
        for(int i = pos+1; i < size; i++) {
            if(arr[i] > arr[i-1]) {
                // cout << "\n" << i;
                return false;
            }
        }
        return true;
    }
};