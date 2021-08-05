// https://leetcode.com/problems/sort-the-matrix-diagonally

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        unordered_map<int, vector<int>> check, wow;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                check[j-i].push_back(mat[i][j]);
            }
        }
        for(auto i : check) {
            sort(begin(i.second), end(i.second));
            wow[i.first] = i.second;
            // cout << i.first << " " ;
            // for(auto x : i.second) cout << x << " " ; cout << endl;
        }
        
        // for(auto i : wow) {
        //     cout << i.first << " " ;
        //     for(auto x : i.second) cout << x << " " ; cout << endl;
        // }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                mat[i][j] = wow[j-i].front();
                wow[j-i].erase(wow[j-i].begin());
            }
        }
        return mat;
    }
};