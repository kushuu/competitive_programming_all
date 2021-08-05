// https://leetcode.com/problems/shortest-distance-to-a-character

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int size = s.size(), temp = 0 ;
        vector<int> l2r(size, 0), r2l(size, 0), ans(size, 0);
        
        int first_pos = -1;
        for(int i = 0; i < size; i++) 
            if(s[i] == c) {
                first_pos = i; break;
            }
        
        for(int i = 0; i < size; i++) {
            if(s[i] == c) temp = 0;
            else l2r[i] = ++temp;
        }
        
        for(int i = size-1; i >= 0; i--) {
            if(s[i] == c) temp = 0;
            else r2l[i] = ++temp;
        }

        for(int i = 0; i <= first_pos; i++) ans[i] = r2l[i];

//         for(auto i : l2r) cout << i << " " ; cout << endl;
//         for(auto i : r2l) cout << i << " " ; cout << endl;
        
        for(int i = first_pos+1; i < size; i++) {
            ans[i] = min(r2l[i], l2r[i]);
        }
        return ans;
    }
};