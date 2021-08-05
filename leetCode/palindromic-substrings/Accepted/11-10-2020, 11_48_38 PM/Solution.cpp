// https://leetcode.com/problems/palindromic-substrings

class Solution {
public:
    int countSubstrings(string s) {
        int size = s.size();
        int matrix[size][size];
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(i == j) matrix[i][j] = 1;
                else matrix[i][j] = 0;
            }
        }

        int ans = size;
        for(int i = size-1; i >= 0; i--) {
            for(int j = i+1; j < size; j++) {
                if(j == i+1 && s[i] == s[j]) {
                    matrix[i][j] = 1;
                    ans++;
                }
                if(matrix[i+1][j-1] == 1 && s[i] == s[j]) {
                    matrix[i][j] = 1;
                    ans++;
                }
            }
        }
        // for(int i = 0; i < size; i++) { 
        //     for(int j = 0; j < size; j++)
        //         cout << matrix[i][j] << " " ;
        //     cout << endl;
        // } 
        return ans;
    }
};